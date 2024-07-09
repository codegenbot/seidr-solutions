#include <string>
#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md, &ctx);
    
    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
    }
    
    return oss.str();
}