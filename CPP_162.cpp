#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx;
    const EVP_MD* md = EVP_md5();
    unsigned int md_len;
    unsigned char md_value[EVP_MAX_MD_SIZE];

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, input.c_str(), input.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < md_len; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)md_value[i];
    }

    return ss.str();
}

std::string md5_assert_check() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return "Assert check passed successfully.";
}

int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::getline(std::cin, input_text);

    std::string md5_result = string_to_md5(input_text);
    std::cout << "MD5 hash: " << md5_result << std::endl;
    md5_assert_check();
    
    return 0;
}