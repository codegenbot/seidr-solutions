#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char result[16];
    MD5_Init(&md5ctx);

    stringstream ss(text);
    int i;
    for (i = 0; i < (int)text.length(); i++) {
        unsigned char c = (unsigned char)ss.get();
        MD5_Update(&md5ctx, &c, 1);
    }

    MD5_Final(result, &md5ctx);

    string md5Str;
    for (int i = 0; i < 16; i++) {
        stringstream ss2;
        ss2 << hex << setfill('0') << setw(2) << (int)result[i];
        md5Str += ss2.str();
    }

    return md5Str;
}