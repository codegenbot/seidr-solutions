```
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    stringstream ss;
    MD5_CTX md5ctx;
    unsigned char result[16];
    unsigned char buffer[1024];

    MD5_Init(&md5ctx);

    for(int i = 0; i < text.size(); i += 1024) {
        int len = min(text.size() - i, 1024);
        memcpy(buffer, &text[i], len);
        buffer[len] = '\0';
        MD5_Update(&md5ctx, buffer, len);
    }

    MD5_Final(result, &md5ctx);

    ss << setfill('0') << setw(32) << hex;
    for(int i = 0; i < 16; ++i)
        ss << std::setw(2) << (int)result[i];

    return ss.str();
}