if (text.empty()) {
    return "None";
}

MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.length());

unsigned char hash[MD5_DIGEST_LENGTH];
MD5_Final(hash, &ctx);

char md5string[2 * MD5_DIGEST_LENGTH + 1];
for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    sprintf(&md5string[i * 2], "%02x", (unsigned int)hash[i]);
}

return string(md5string);
}