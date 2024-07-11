if(text.empty()) {
    return "None";
}

MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.length());

unsigned char digest[MD5_DIGEST_LENGTH];
MD5_Final(digest, &ctx);

char mdString[33];
for (int i = 0; i < 16; i++) {
    sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
}

return string(mdString);