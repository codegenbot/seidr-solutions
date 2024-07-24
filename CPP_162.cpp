#include <string>
#include <sstream>
#include <digest>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "Invalid Input";
    }

    MD5_CTX ctx;
    unsigned char md[16];

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill(2) << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}