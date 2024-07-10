```cpp
#include <string>
#include <algorithm>
#include <cctype>

std::string myString_to_md5(std::string text) {
    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD* md = NULL;
    unsigned char d[EVP_MAX_BLOCK_LENGTH];

    if (1 == EVP_DigestInit_ex(&mdctx, EVP_md_md5(), 0)) {
        EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
        EVP_DigestFinal_ex(&mdctx, result, &d);
    }
    std::string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }
    return output;
}

int main() {
    std::cout << myString_to_md5("password") << std::endl;
    return 0;
}