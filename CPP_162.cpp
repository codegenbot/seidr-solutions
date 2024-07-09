std::string string_to_md5(const std::string& input) {
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(md5, &ctx);

    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        output.push_back((char)md5[i]);
    }

    return output;
}