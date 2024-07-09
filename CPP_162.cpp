#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char md5[16];
    MD5Init(&md5ctx);
    MD5Update(&md5ctx, text.c_str(), text.size());
    MD5Final(md5, &md5ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        printf("%02x", md5[i]);
        ss << std::hex << setfill('0') << setw(2) << (int)md5[i];
    }
    return ss.str();
}