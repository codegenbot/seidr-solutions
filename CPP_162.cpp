#include <iostream>
#include <string>
using namespace std;
std::string string_to_md5(const std::string& s) {
    CryptoPP::SHA1 sha;
    unsigned char md5[20];
    byte* str = (byte*)s.c_str();
    int len = s.size();
    sha.Calculate(str, len, md5);
    std::string result;
    for (int i = 0; i < 20; ++i)
        result.push_back(((unsigned char)md5[i]) * 2 + ((md5[i] * 4) > 9) ? ((unsigned char)md5[i]) * 2 + ((md5[i] * 4) > 9) : "0");
    return result;
}