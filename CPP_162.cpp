#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX md5context;
    MD5_Init(&md5context);
    const char *p = text.c_str();
    MD5_Update(&md5context, p, text.size());
    MD5_Final(result, &md5context);

    string hashString;

    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        hashString.append(temp);
    }

    return hashString;
}