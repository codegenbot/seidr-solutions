unsigned char md[16];
MD5_CTX ctx;
MD5Init(&ctx);
unsigned char *str = (unsigned char *)text.c_str();
MD5Update(&ctx, str, text.length());
MD5Final(md, &ctx);
string result = "";
for(int i=0; i<16; i++){
    stringstream ss;
    ss << hex << (int)md[i];
    result += ss.str();
}
if(text.empty()) {
    return "None";
} else {
    return string(result);
}