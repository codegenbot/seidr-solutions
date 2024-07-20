#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <string>
#include <sstream>
#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);
    
    std::stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << std::hex << std::setfill('0') << std::fixed << std::setw(2) << (int)result[i];
    }
    
    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}