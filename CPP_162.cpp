string string_to_md5(string text){
    MD5_CTX md5Ctx;
    unsigned char result[16];
    if(text.empty()){
        return "";
    }
    MD5_Init(&md5Ctx);
    MD5_Update(&md5Ctx,(unsigned char*)text.c_str(),text.size());
    MD5_Final(result,&md5Ctx);
    string hashStr = "";
    for(int i=0; i<16; i++){
        char buffer[3];
        sprintf(buffer,"%02x",result[i]);
        hashStr+=string(buffer);
    }
    return hashStr;
}