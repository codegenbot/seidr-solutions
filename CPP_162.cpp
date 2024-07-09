#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* str = text.c_str();
    while (*str) {
        MD5_Update(&md5, str, 1);
        str++;
    }
    MD5_Final(buffer, &md5);

    string hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char temp[3];
        sprintf(temp, "%02x", buffer[i]);
        hash.append(temp);
    }

    return hash;
}