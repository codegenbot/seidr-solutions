#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX md5ctx;
    unsigned char hash[16];

    if (text.empty()) return "";
    
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(hash, &md5ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result += buff;
    }

    return result;
}