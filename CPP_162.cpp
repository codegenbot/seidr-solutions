if(text.empty()){
    return "None";
}
unsigned char md5_result[MD5_DIGEST_LENGTH];
MD5((unsigned char*) text.c_str(), text.length(), md5_result);
char md5_string[MD5_DIGEST_LENGTH * 2 + 1];
for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
    sprintf(&md5_string[i * 2], "%02x", (unsigned int)md5_result[i]);
}
return string(md5_string);
}