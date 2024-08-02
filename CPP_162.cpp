```cpp
#include <iomanip>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << std::setw(2) << static_cast<unsigned int>(md5[i]);
    }

    return ss.str();
}