#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <openssl/md5.h>

std::string stringToMd5(const std::string& str) {
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, str.c_str(), str.size());
    MD5_Final(md5, &ctx);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::hex << (int)(md5[i]) << "";
    }

    return ss.str();
}

int main() {
    int i = 0;
    std::vector<std::string> inputStrings;

    // Add your code to populate the 'inputStrings' vector

    for (const auto& s : inputStrings) {
        std::stringstream ss;
        ss << std::setfill(2) << std::setw(8) << std::hex << (int)s.size();
        std::cout << ss.str() << "\n";
    }
    return 0;
}