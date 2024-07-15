if(text.empty())
        return "None";
    
    MD5_CTX mdContext;
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_Init(&mdContext);
    MD5_Update(&mdContext, text.c_str(), text.size());
    MD5_Final(md, &mdContext);

    char mdString[33];
    for(int i = 0; i < 16; i++)
        sprintf(&mdString[i*2], "%02x", (unsigned int)md[i]);

    return mdString;
}