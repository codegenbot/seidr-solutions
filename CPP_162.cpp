#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char mdBuffer[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* str = text.c_str();
    size_t length = text.length();
    MD5_Update(&mdContext, str, length);
    MD5_Final(mdBuffer, &mdContext);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << setfill('0') << setw(2) << hex << (int) mdBuffer[i];
    }

    return ss.str();
}