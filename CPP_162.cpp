#include <openssl/md5.h>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    MD5_CTX context;
    unsigned char mdBuffer[16];
    
    MD5_Init(&context);
    const char* p = text.c_str();
    while (*p) {
        MD5_Update(&context, p, 1);
        p++;
    }
    MD5_Final(mdBuffer, &context);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)mdBuffer[i];
    }

    return oss.str();
}