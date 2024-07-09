if(text.empty()){
    return "None";
}

MD5_CTX mdContext;
MD5_Init(&mdContext);
MD5_Update(&mdContext, text.c_str(), text.length());
unsigned char digest[16];
MD5_Final(digest, &mdContext);
char mdString[33];
for (int i = 0; i < 16; i++)
    sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
mdString[32] = '\0';
return string(mdString);
}