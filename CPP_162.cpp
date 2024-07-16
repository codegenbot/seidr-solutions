if(text.empty()){
        return "None";
    }
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);
    
    char buffer[2 * MD5_DIGEST_LENGTH + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        sprintf(&buffer[i*2], "%02x", (unsigned int)result[i]);
    }
    
    return string(buffer);
}