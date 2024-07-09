#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);

    const char* str = text.c_str();
    size_t len = text.length();

    MD5_Update(&mdContext, str, len);
    MD5_Final(result, &mdContext);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return oss.str();
}