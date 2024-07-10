```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5context;
    unsigned char result[16];
    MD5_Init(&md5context);
    const char* ptr = text.c_str();
    size_t len = text.length();

    MD5_Update(&md5context, ptr, len);

    MD5_Final(result,&md5context);

    stringstream ss;
    for(int i=0; i<16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}