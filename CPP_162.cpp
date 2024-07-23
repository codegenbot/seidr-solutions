if(text.empty()) {
    return "None";
}

MD5_CTX context;
MD5_Init(&context);
MD5_Update(&context, text.c_str(), text.size());
unsigned char digest[MD5_DIGEST_LENGTH];
MD5_Final(digest, &context);

char mdString[33];
for(int i = 0; i < 16; i++) {
    sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
}

return string(mdString);
}