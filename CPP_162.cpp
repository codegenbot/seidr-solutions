#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* cstr = text.c_str();
    MD5_Update(&md5, cstr, text.size());
    MD5_Final(result, &md5);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return oss.str();
}