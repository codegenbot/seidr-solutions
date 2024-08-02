#include <string>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *p = text.c_str();
    while (*p) MD5_Update(&md5, p, 1);
    MD5_Final(result, &md5);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
    }
    return ss.str();
}