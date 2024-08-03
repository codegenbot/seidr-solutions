#include <openssl/evp.h>

std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_md5());
    EVP_DigestUpdate(ctx, input.c_str(), input.length());
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;
    EVP_DigestFinal_ex(ctx, hash, &hash_len);
    EVP_MD_CTX_free(ctx);

    std::stringstream ss;
    for (unsigned int i = 0; i < hash_len; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(hash[i]);
    }

    return ss.str();
}

int main() {
    std::string input;
    std::cin >> input;
    std::string md5_hash = string_to_md5(input);
    std::cout << "MD5 Hash: " << md5_hash << std::endl;

    return 0;
}