#include <string>
#include <cassert>
#include <openssl/md5.h>

std::string MD5(const unsigned char* input, unsigned int length) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    char md5Hash[MD5_DIGEST_LENGTH*2+1];

    MD5(input, length, digest);

    for(int i=0; i<MD5_DIGEST_LENGTH; i++){
        sprintf(&md5Hash[i*2], "%02x", (unsigned int)digest[i]);
    }

    return std::string(md5Hash);
}

std::string string_to_md5(std::string text){
    if(text.empty()){
        return "None";
    }

    return MD5(reinterpret_cast<const unsigned char*>(text.c_str()), text.length());
}

int main() {
    assert (string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}