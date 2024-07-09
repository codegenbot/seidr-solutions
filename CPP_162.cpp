```cpp
#include <string>
#include <algorithm>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "";
    
    unsigned char md5[16];
    const EVP_MD* md = EVP_md5();
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    unsigned char input[1024];

    int input_len = strlen(text.c_str());
    int total_len = 0;
    for(int i=0; i<input_len; i++) {
        input[i] = (unsigned char)text[i];
    }
    
    EVP_DigestInit_ex(ctx, md, NULL);
    EVP_DigestUpdate(ctx, input, input_len);
    EVP_DigestFinal_ex(ctx, md, NULL);

    string result;
    for(int i=0; i<16; i++) {
        char buf[3];
        sprintf(buf, "%02x", (unsigned)md[i]);
        result.append(string(buf));
    }
    
    EVP_MD_CTX_free(ctx);
    
    return result;
}