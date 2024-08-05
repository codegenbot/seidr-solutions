#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    MD5_Final(digest, &ctx);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setw(2) << setfill('0') << (int)digest[i];
    }

    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}