#include <openssl/md5.h>
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    MD5_CTX context;
    unsigned char mdBuffer[16];
    
    // call MD5_Init
    MD5_Init(&context);
    
    const char* p = text.c_str();
    while (*p) {
        // call MD5_Update
        MD5_Update(&context, p, 1);
        p++;
    }
    
    // finalize...
    // call MD5_Final
    MD5_Final(mdBuffer, &context);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)mdBuffer[i];
    }

    return oss.str();
}