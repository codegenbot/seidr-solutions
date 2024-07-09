Here is the solution:

```cpp
#include <openssl/md5.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    std::string hash;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&hash[2*i],"%02x",result[i]);
    }
    
    return hash;
}