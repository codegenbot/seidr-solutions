```
#include <string>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    stringstream ss;
    unsigned char result[16];
    size_t len = 0;
    MD5_CTX md5ctx;
    unsigned char buffer[1024];

    MD5_Init(&md5ctx);

    for(len = 0; len < text.size(); len += 1024) {
        size_t chunk_len = min(text.size() - len, 1024);
        memcpy(buffer, &text[len], chunk_len);
        buffer[chunk_len] = '\0';
        MD5_Update(&md5ctx, buffer, chunk_len);
    }

    MD5_Final(result, &md5ctx);

    ss << setfill('0') << setw(32) << hex;
    for(size_t i = 0; i < 16; ++i)
        ss << std::setw(2) << (int)result[i];

    return ss.str();
}