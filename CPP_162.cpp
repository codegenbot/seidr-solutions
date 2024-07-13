#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char buffer[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* cstr = text.c_str();
    MD5_Update(&md5, cstr, text.size());
    MD5_Final(buffer, &md5);

    string result;
    for (int i = 0; i < 16; ++i) {
        char hex[3];
        sprintf(hex, "%02x", buffer[i]);
        result += hex;
    }
    
    return result;
}