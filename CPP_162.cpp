#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    unsigned char result[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t length = text.length();
    MD5_Update(&mdContext, ptr, length);
    MD5_Final(result, &mdContext);
    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    return oss.str();
}