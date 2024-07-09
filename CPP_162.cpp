```cpp
#include <digest.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5(text.c_str(), text.size(), hash);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)hash[i];
    }

    return ss.str();
}