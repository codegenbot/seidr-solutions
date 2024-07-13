#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    MD5_CTX md5ctx;
    unsigned char result[16];
    string output;

    if (text.empty()) return "None";

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(result, &md5ctx);

    for (int i = 0; i < 16; ++i) {
        char c = (char)(result[i] >> 4);
        if (c > '9' && c < 'A') c -= 7;
        else if (c > 'f' && c < 'g') c -= 5;

        output += c;

        c = (char)(result[i] & 0x0F);
        if (c > '9' && c < 'A') c -= 7;
        else if (c > 'f' && c < 'g') c -= 5;

        output += c;
    }

    return output;
}