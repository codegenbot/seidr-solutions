#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX md5sum;
    MD5_Init(&md5sum);

    const char* cstr = text.c_str();
    size_t len = text.size();

    MD5_Update(&md5sum, cstr, len);
    MD5_Final(md5, &md5sum);

    string result;

    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }

    return result;
}