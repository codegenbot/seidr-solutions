#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const unsigned char *ptr = reinterpret_cast<const unsigned char *>(text.c_str());
    size_t len = text.size();
    while(len > 0) {
        MD5_Update(&md5, ptr, min(len, (size_t)64));
        len -= 64;
        ptr += 64;
    }
    MD5_Final(result, &md5);

    string md5Str;
    for(int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5Str.append(buff);
    }

    return md5Str;
}