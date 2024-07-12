MD5_CTX md5ctx;
MD5_Init(&md5ctx);
unsigned char md5sum[16];
char temp[2];

if(text.empty()) return "None";
temp[1] = 0;
for(int i=0; i<text.length(); i++) {
    MD5_Update(&md5ctx, &text[i], 1);
}
MD5_Final(md5sum,&md5ctx);

string result="";
for(int i=0; i<16; i++) {
    sprintf(temp,"%02x", (int) md5sum[i]);
    result += temp;
}

return result;