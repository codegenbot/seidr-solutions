#include <string>
#include <openssl/ssl.h>
#include <openssl/rand.h>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "None";

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX m;
    MD5_Init(&m);
    const char* p = text.c_str();
    while(*p) {
        MD5_Update(&m, p, strlen(p)+1);
        p += strlen(p)+1;
    }
    MD5_Final(md,&m);

    stringstream ss;
    for(int i = 0; i < sizeof(md)/sizeof(md[0]); i++) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}