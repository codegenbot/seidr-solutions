MD5_CTX ctx;
unsigned char md[16];
MD5_Init(&ctx);
const unsigned char *p = (const unsigned char*)text.c_str();
while (*p) {
    MD5_Update(&ctx, p, 1);
    p++;
}
MD5_Final(md, &ctx);

string result;
for (int i = 0; i < 4; i++) {
    char buff[3];
    sprintf(buff, "%02x", md[i]);
    result += string(buff);
}

string result = text.empty() ? "None" : result;
return result;