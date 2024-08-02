#include <string>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }
    
    if (string_to_md5("password") != "5f4dcc3b5aa765d61d8327deb882cf99") {
        cout << "Test failed!" << endl;
    }
    
    return result;
}