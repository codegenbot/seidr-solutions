std::string string_to_md5(const std::string& input) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md;
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int hash_len;

    OpenSSL_add_all_algorithms(); // Initialize OpenSSL library

    md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    
    if (mdctx == nullptr) {
        return "";
    }

    if (EVP_DigestInit_ex(mdctx, md, NULL) != 1) {
        return "";
    }

    if (EVP_DigestUpdate(mdctx, input.c_str(), input.size()) != 1) {
        return "";
    }

    if (EVP_DigestFinal_ex(mdctx, hash, &hash_len) != 1) {
        return "";
    }

    EVP_MD_CTX_free(mdctx);

    std::string md5_hash;
    for (unsigned int i = 0; i < hash_len; i++) {
        md5_hash += char(hash[i]);
    }

    return md5_hash;
}