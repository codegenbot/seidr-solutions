```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX c;
    MD5_Init(&c);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&c, str, len);
    MD5_Final(md, &c);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}