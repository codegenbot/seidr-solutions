string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    stringstream ss;

    EVP_MD_CTX_init(&ctx);
    EVP_md5_update(&ctx, text.c_str(), text.size());
    EVP_md5_final(mdBuffer, &ctx);

    for (int i = 0; i < 16; i++) {
        sprintf(&ss.str()[0], "%02x", (char)mdBuffer[i]);
        ss.seekp(0);
    }

    return ss.str();
}