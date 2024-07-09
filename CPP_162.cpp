string string_to_md5(string text) {
    if(text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char *txt = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, txt, len);
    MD5_Final(md5,&ctx);

    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }
    
    return ss.str();
}