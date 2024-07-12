#include <string>
#include <sstream>
#include <iomanip> 
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    ostringstream ss; 

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(mdBuffer, &ctx);

    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << static_cast<int>(mdBuffer[i]);
    }

    return ss.str();
}