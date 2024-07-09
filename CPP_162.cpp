```cpp
#include <string>
#include <vector>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    const EVP_MD *md = EVP_get_md5();
    const unsigned char *data = (const unsigned char *)text.c_str();
    size_t dataLen = text.size();

    unsigned int len = 0;
    unsigned char mdValue[EVP_MAX_BLOCK_LENGTH];

    EVP_Digest(data, dataLen, mdValue, &len, md, NULL);

    string strResult;

    for(int i=0; i<len; i++) {
        stringstream sstream;
        sstream << hex << (int)mdValue[i];
        strResult += sstream.str();
    }

    return strResult;
}