```
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX ctx;
    MD5_Init(&ctx);
    unsigned char buffer[1024];
    stringstream ss(text);
    char c;
    while (ss >> noskipws >> c) {
        MD5_Update(&ctx, &c, 1);
    }
    MD5_Final(&ctx, buffer);
    
    stringstream md5Stream;
    for (int i = 0; i < 16; ++i) {
        md5Stream << setfill('0') << setw(2) << hex << (int)buffer[i];
    }
    
    return md5Stream.str();
}