#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    size_t len = text.length();
    while(len > 0) {
        MD5_Update(&md5, ptr, min(len, (size_t)64));
        len -= 64;
        ptr += 64;
    }
    MD5_Final(buffer, &md5);

    string result;
    for(size_t i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", buffer[i]);
        result.append(buf);
    }

    return result;
}