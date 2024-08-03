```cpp
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    MD5_Update(&mdContext, ptr, len);
    MD5_Final(result, &mdContext);

    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        output += buff;
    }

    return output;
}