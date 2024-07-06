```cpp
#include <openssl/md5.h>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    stringstream ss;
    unsigned char result[16];

    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(result, &md5ctx);

    for(int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}