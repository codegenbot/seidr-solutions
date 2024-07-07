MD5_CTX md5context;
unsigned char result[16];

if(text.empty()){
    return "None";
}

MD5Init(&md5context);
MD5Update(&md5context, text.c_str(), text.length());
MD5Final(result,&md5context);

char hashString[33];
for(int i=0; i<16; i++){
    sprintf(hashString + 2*i, "%02x", result[i]);
}

return string(hashString);