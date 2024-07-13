Here is the completed code:

#include <string>
#include <algorithm>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5;
    unsigned char result[16];
    MD5_Init(&md5);
    MD5_Update(&md5, text.c_str(), text.size());
    MD5_Final(&md5, result);

    string hashValue;
    for (int i = 0; i < 16; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << int(result[i]);
        hashValue += ss.str();
    }

    return hashValue;
}