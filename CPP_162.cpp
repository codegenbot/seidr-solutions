#include <iostream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_PKEY *md5_sig = EVP_get_digestbyname("MD5");
    EVP_DigestInit(&mdctx, md5_sig);
    const char* p = text.c_str();
    while (*p) {
        EVP_DigestUpdate(&mdctx, p, 1);
        p++;
    }
    unsigned char *digest;
    int len;
    EVP_DigestFinal(&mdctx, md5, &len);
    digest = (unsigned char *)malloc(len);
    memcpy(digest, md5, len);

    std::string result(32, '0');
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", digest[i]);
        result.replace(i*2, 2, buf);
    }

    free(digest);
    return result;
}

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::getline(std::cin, text);
    std::cout << "MD5: " << string_to_md5(text) << std::endl;
    return 0;