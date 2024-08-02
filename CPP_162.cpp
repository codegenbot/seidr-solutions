#include <iostream>
#include <string>
#include <cassert>
#include <openssl/evp.h>
#include <iomanip>
#include <sstream>

std::string string_to_md5(const std::string& text) {
    if (text.empty())
        return "None";

    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);

    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    for (unsigned int i = 0; i < md_len; ++i) {
        ss << std::setw(2) << static_cast<int>(md_value[i]);
    }

    EVP_MD_CTX_free(mdctx);

    return ss.str();
}

extern int main();
int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::cin >> input_text;

    std::string md5_result = string_to_md5(input_text);
    std::cout << "MD5 hash: " << md5_result << std::endl;

    return 0;
}