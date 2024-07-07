MD5_CTX md5ctx;
unsigned char md5[16];
string result;

if(text.empty()) {
    return "";
}

MD5_Init(&md5ctx);
MD5_Update(&md5ctx, text.c_str(), text.size());
MD5_Final(md5, &md5ctx);

for(int i = 0; i < 16; i++) {
    char buf[3];
    sprintf(buf, "%02x", md5[i]);
    result += string(buf);
}

return result;