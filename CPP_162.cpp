#include <cassert>
#include <string>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>

std::string string_to_md5(const std::string& str){
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)str.c_str(), str.size(), result);

    std::stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++){
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)result[i];
    }
    
    return ss.str();
}