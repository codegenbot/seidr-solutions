#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    MD5_Update(&ctx, ptr, len);
    MD5_Final(result, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << (int)result[i];
    }

    return ss.str();
}