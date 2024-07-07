```c++
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX md5;
    unsigned char md5Buffer[16];
    MD5_Init(&md5);

    stringstream ss(text);
    string str;
    int len = 0;
    while (getline(ss, str, '\0')) {
        len += str.length();
        const char* cstr = str.c_str();
        MD5_Update(&md5, cstr, str.length());
    }

    MD5_Final(md5Buffer, &md5);

    stringstream ssOut;
    for (int i = 0; i < 16; ++i) {
        ssOut << hex << setfill('0') << setw(2) << (int)md5Buffer[i];
    }
    return ssOut.str();
}