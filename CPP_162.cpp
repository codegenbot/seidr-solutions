```cpp
#include <iostream>
#include <string>
#include <md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md5, &ctx);
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md5[i]);
        result.append(buf);
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string output = string_to_md5(input);
    cout << "MD5 of the input string is: " << output << endl;
    return 0;
}