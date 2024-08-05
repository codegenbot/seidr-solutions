#include <iostream>
#include <string>
#include <openssl/md5.h>
#include <cassert>

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_CTX context;
    MD5_Init_ex(&context, NULL);
    MD5_Update(&context, text.c_str(), text.length());
    MD5_Final_ex(digest, &context, NULL);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}

int main() {
    // Include the necessary steps for the code contest problem here
    // For now, let's just test the MD5 function output
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}