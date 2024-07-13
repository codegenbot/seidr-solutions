Here is the completed code:

```cpp
#include <openssl/ssl.h>
#include <openssl/err.h>

string string_to_md5(string text) {
    MD5_CTX md5;
    unsigned char result[16];
    string ret = "";

    if (text.empty()) return "";
    
    MD5_Init(&md5);
    const char *ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &md5);

    for(int i=0; i<16; i++){
        sprintf(ret+sprintf("%02x", result[i]), "");
    }

    return ret;
}