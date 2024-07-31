```
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);

    stringstream ss(text);
    string str;
    while(getline(ss, str)) {
        const uint8_t* ptr = reinterpret_cast<const uint8_t*>(str.c_str());
        MD5_Update(&ctx, &ptr[0], str.size());
    }

    MD5_Final(result, &ctx);

    ostringstream oss;
    for(int i=0; i<16; i++) {
        oss << setfill('0') << setw(2) << hex << (int)(result[i]);
    }

    return oss.str();
}