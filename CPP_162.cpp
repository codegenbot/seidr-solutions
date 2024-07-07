MD5_CTX md5Ctx;
unsigned char md5Buffer[16];
size_t len = text.length();
char *strText = text.c_str();

if (len == 0) {
    return "";
}

MD5Init(&md5Ctx);
MD5Update(&md5Ctx, strText, len);
MD5Final(md5Buffer, &md5Ctx);

stringstream ss;
for(int i=0; i<16; i++){
    char c = (char)(md5Buffer[i] >> 4);
    if(c > '9')
        c = ((c - 'a' + 10) % 16);
    else
        c += '0';
    
    ss << c;
    c = (char)(md5Buffer[i] & 0xF);
    if(c > '9')
        c = ((c - 'a' + 10) % 16);
    else
        c += '0';
    ss << c;
}
return ss.str();