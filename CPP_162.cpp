#include<string>
#include<openssl/evp.h>
#include <openssl/hmac.h>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *s = text.c_str();
    while(*s) MD5_Update(&md5, s++, 1);
    MD5_Final(result,&md5);

    ostringa;
    for(int i = 0; i < sizeof(result); i++) {
        stringstream ss;
        ss << hex << setfill('0') <<setw(2)<< (int)result[i];
        ossa += ss.str();
    }
    return osa;
}