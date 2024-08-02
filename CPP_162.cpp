#include <string>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    MD5_CTX md5ctx;
    unsigned char result[16];
    unsigned char buffer[1024];

    MD5_Init(&md5ctx);

    for(size_t i = 0; i < text.size(); i += 1024) {
        size_t len = min(text.size() - i, 1024);
        memcpy(buffer, &text[i], len);
        buffer[len] = '\0';
        MD5_Update(&md5ctx, buffer, len);
    }

    MD5_Final(result, &md5ctx);

    stringstream ss;
    ss << setfill('0') << setw(32) << hex;
    for(size_t i = 0; i < 16; ++i)
        ss << std::setw(2) << (int)result[i];

    return ss.str();
}