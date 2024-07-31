#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX c;
    MD5_Init(&c);
    const char *ptr = text.c_str();
    size_t len = text.size();
    while (len > 0) {
        MD5_Update(&c, ptr, len);
        len -= MD5_BlockSize();
        ptr += MD5_BlockSize();
    }
    MD5_Final(&c, md5);
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    return ss.str();
}