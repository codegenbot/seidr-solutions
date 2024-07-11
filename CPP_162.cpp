if (text.empty()) {
    return "None";
}

MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.length());

unsigned char result[MD5_DIGEST_LENGTH];
MD5_Final(result, &ctx);

char md5String[MD5_DIGEST_LENGTH * 2 + 1];
for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
    sprintf(&md5String[i * 2], "%02x", (unsigned int)result[i]);
}

return string(md5String);