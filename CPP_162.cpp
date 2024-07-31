#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&output[2*i], "%02x", result[i]);
    }
    return output;
}