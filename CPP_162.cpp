```cpp
#include <sstream>
#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    #include <openssl/md5.h>
    MD5_Init(&ctx);
    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << std::hex << std::setfill('0') << std::setw(2) << (unsigned int)(md5[i]);
    }

    return ss.str();
}