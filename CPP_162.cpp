if(text.empty()){
    return "None";
}

MD5_CTX ctx;
MD5_Init(&ctx);
MD5_Update(&ctx, text.c_str(), text.length());

unsigned char result[MD5_DIGEST_LENGTH];
MD5_Final(result, &ctx);

char md5_hash[2 * MD5_DIGEST_LENGTH + 1];
for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
    sprintf(md5_hash + 2*i, "%02x", result[i]);
}
md5_hash[2 * MD5_DIGEST_LENGTH] = '\0';

return string(md5_hash);
}