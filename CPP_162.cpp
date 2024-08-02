#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& input) {
    unsigned char result[EVP_MAX_MD_SIZE];
    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, input.c_str(), input.length());
    EVP_DigestFinal_ex(mdctx, result, NULL);
    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < EVP_MD_size(md); i++) {
        ss << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(result[i]);
    }

    return ss.str();
}

int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::getline(std::cin, input_text);

    std::string md5_result = string_to_md5(input_text);
    std::cout << "MD5 hash: " << md5_result << std::endl;
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    
    return 0;
}