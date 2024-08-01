#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char result[16];
    MD5_Init(&md5ctx);
    const char* cstr = text.c_str();
    MD5_Update(&md5ctx, cstr, text.size());
    MD5_Final(result, &md5ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << static_cast<int>(result[i]);
    }

    return ss.str();
}