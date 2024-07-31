#include<string>
#include<openssl/md5.h>
#include<vector>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    vector<char> md5_sum(16);

    MD5_CTX ctx;
    MD5Init(&ctx);
    MD5Update(&ctx, text.c_str(), text.length());
    MD5Final(&ctx, &md5_sum[0]);

    string result;
    for (int i = 0; i < 16; i++) {
        char c = md5_sum[i];
        result.push_back(hex(c));
    }

    return result;
}

char hex(char c) {
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) {
        return c;
    }
    if (c < 10) {
        return '0' + c;
    }
    if (c < 16) {
        return 'A' + c - 10;
    }
    throw runtime_error("Invalid character in hexadecimal representation");
}