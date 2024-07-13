MD5_CTX ctx;
unsigned char md[16];
std::string result;

if (text.empty()) {
    return "None";
}

MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.size());
MD5_Final(md, &ctx);

for (int i = 0; i < 16; ++i) {
    char buffer[3];
    sprintf(buffer, "%02x", md[i]);
    result += string(buffer);
}

return result;