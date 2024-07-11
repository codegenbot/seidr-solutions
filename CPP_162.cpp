if(text.empty()) {
        return "None";
    }

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), hash);

    char mdString[33];
    for(int i = 0; i < 16; i++){
        sprintf(&mdString[i*2], "%02x", (unsigned int)hash[i]);
    }

    return mdString;
}