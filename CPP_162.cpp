#include<string>
#include<openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5Init(&ctx);
    MD5Update(&ctx, text.c_str(), text.size());
    MD5Final(result, &ctx);

    ostringstream oss;
    for(int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    
    return oss.str();
}