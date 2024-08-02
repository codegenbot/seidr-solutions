#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* ctx;
    EVP_MD_CTX_new(ctx);
    EVP_DigestInit_ex(ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx, input.c_str(), input.size());

    unsigned char result[EVP_MD_size(EVP_md5())];
    EVP_DigestFinal_ex(ctx, result, NULL);
    EVP_MD_CTX_free(ctx);

    std::stringstream ss;
    for (int i = 0; i < EVP_MD_size(EVP_md5()); i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)result[i];
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