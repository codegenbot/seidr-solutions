MD5_CTX ctx;
MD5_Init(&ctx);
unsigned char digest[16];
MD5_Update(&ctx, text.c_str(), text.size());
MD5_Final(digest, &ctx);

string result = "";
for (int i = 0; i < 16; i++) {
    char buffer[3];
    sprintf(buffer, "%02x", digest[i]);
    result += string(buffer);
}

return result;