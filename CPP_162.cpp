MD5_CTX ctx;
unsigned char md5[16];
int len = (int)text.length();
uchar* p = reinterpret_cast<uchar*>(text.c_str());
MD5_Init(&ctx);
while(len > 64) {
    MD5_Update(&ctx, p, 64);
    p += 64;
    len -= 64;
}
if(len > 0) {
    MD5_Update(&ctx, p, len);
}
MD5_Final(md5, &ctx);

string result = "";
for(int i=0; i<16; i++) {
    char c = (char)(md5[i] >> 4) + '0';
    if(c > '9') c += ('a' - '0');
    result.push_back(c);
    c = (char)(md5[i] & 0x0f) + '0';
    if(c > '9') c += ('a' - '0');
    result.push_back(c);
}

return result;