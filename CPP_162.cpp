std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    EVP_MD_CTX ctx;
    EVP_MD_CTX_init(&ctx);
    EVP_DigestInit_ex(&ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&ctx, md, sizeof(md));
    EVP_MD_CTX_cleanup(&ctx);

    std::string result;
    for(int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", md[i]);
        result += temp;
    }
    
    return result;
}