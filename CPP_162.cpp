unsigned char md[MD5_DIGEST_LENGTH];
MD5_CTX ctx;
MD5_Init(&ctx);
const unsigned char* p = (const unsigned char*)text.c_str();
int len = text.length();
MD5_Update(&ctx, p, len);
MD5_Final(md, &ctx);
string res;
for(int i=0; i<16; i++) {
    char buf[3];
    sprintf(buf, "%02x", md[i]);
    res.append(buf);
}
if(text.empty()) return "None";
return string(1, '#') + res;