if(text.empty()) {
    return "None";
}

MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.size());

unsigned char hash[MD5_DIGEST_LENGTH];
MD5_Final(hash, &ctx);

stringstream ss;
for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    ss << hex << setw(2) << setfill('0') << static_cast<int>(hash[i]);
}

return ss.str();