#include <openssl/ssl.h>
#include <openssl/rand.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if(text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* str = text.c_str();
    size_t len = text.length();

    MD5_Update(&mdContext, str, len);

    MD5_Final(result, &mdContext);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << static_cast<int>(result[i]);
    }
    return ss.str();
}