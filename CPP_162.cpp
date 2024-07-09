#include <iostream>
#include <string>

std::string string_to_md5(const std::string& str) {
    // Include necessary library for MD5 calculation
    #include <md5.h>

    MD5_CTX ctx;
    unsigned char hash[16];
    int len = strlen(str.c_str());
    
    // Update the context based on input string
    MD5_Init(&ctx);
    MD5_Update(&ctx, str.c_str(), len);

    // Calculate and store MD5 hash in hash array
    MD5_Final(hash,&ctx);

    std::stringstream ss;
    for(int i = 0; i < 16; i++){
        char c = ((char*)&hash[i])[0];
        if(c >= 'a' && c <= 'f')
            ss << 'f';
        else if (c >= '0' && c <= '9')
            ss << c;
        else
            ss << '%', c;
    }

    return ss.str();
}