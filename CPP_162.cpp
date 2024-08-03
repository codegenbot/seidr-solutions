#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char md5digest[16];
    stringstream ss; // initialize the stream with an empty string

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.length());
    MD5_Final(&md5ctx, md5digest);

    for (int i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md5digest[i];
    }

    return ss.str();
}