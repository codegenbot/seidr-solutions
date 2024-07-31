```cpp
#include <string>
#include <sstream>
#include <iomanip> 
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    stringstream ss;
    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    MD5_Init(&ctx);

    for (char c : text) {
        MD5_Update(&ctx, &c, 1);
    }

    MD5_Final(mdBuffer, &ctx);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)mdBuffer[i];
    }

    return oss.str();
}