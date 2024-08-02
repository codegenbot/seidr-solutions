#include <string>
#include <iostream>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(input.c_str()), input.length(), digest);
    char md5_hash[MD5_DIGEST_LENGTH*2+1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(&md5_hash[i*2], "%02x", (unsigned int)digest[i]);
    return std::string(md5_hash);
}

std::string input_text = "[input_value]";
std::string md5_result = string_to_md5(input_text);