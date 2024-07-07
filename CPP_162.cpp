#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char md5[16];
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, (const unsigned char*)text.c_str(), text.size());
    MD5_Final(md5, &md5ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}