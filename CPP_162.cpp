string string_to_md5(string text){
    MD5_CTX md5ctx;
    unsigned char md5buf[16];
    size_t len = strlen(text.c_str());
    
    if(len == 0)
        return "None";
    
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), len);
    MD5_Final(md5buf, &md5ctx);
    
    string result;
    for(int i = 0; i < 16; i++){
        char hex[3];
        sprintf(hex, "%02x", md5buf[i]);
        result += hex;
    }
    
    return result;
}