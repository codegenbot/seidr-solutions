```cpp
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    MD5_CTX mdContext;
    MD5Init(&mdContext);
    const char* p = text.c_str();
    size_t len = text.size();
    size_t bytesLeft = len;

    while(bytesLeft > 0) {
        size_t bytesToProcess = (bytesLeft > sizeof(buffer)) ? sizeof(buffer) : bytesLeft;
        memcpy(buffer, p, bytesToProcess);
        MD5Update(&mdContext, buffer, bytesToProcess);
        p += bytesToProcess;
        bytesLeft -= bytesToProcess;
    }

    unsigned char result[16];
    MD5Final(result,&mdContext);

    string str = "";
    for(int i=0; i<16; ++i) {
        char c = (char)(result[i]);
        if(c>47&&c<58)
            str+=c;
        else
            str += "0";
    }

    return str;
}