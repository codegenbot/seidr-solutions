if (text.empty()) {
    return "None";
}

MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.length());

unsigned char md5_hash[MD5_DIGEST_LENGTH];
MD5_Final(md5_hash, &ctx);

char md5_str[MD5_DIGEST_LENGTH * 2 + 1];
for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
    sprintf(&md5_str[i * 2], "%02x", (unsigned int)md5_hash[i]);
}

return string(md5_str);