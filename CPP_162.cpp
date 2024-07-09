#include <iostream>
#include <openssl/md5.h>
#include <cassert>

std::string string_to_md5(const std::string& text){
    if(text.empty()){
        return "None";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    char md5_string[MD5_DIGEST_LENGTH * 2 + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        sprintf(&md5_string[i*2], "%02x", (unsigned int)result[i]);
    }

    return std::string(md5_string);
}

int main(){
    // Example usage
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}