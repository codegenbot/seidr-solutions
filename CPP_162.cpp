```
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5Context;
    unsigned char md5Digest[16];
    const EVP_MD* evpMd = EVP_md5();
    EVP_MD_CTX_init(&md5Context);

    const void *data = reinterpret_cast<const void*>(text.c_str());
    size_t dataLen = text.length();

    EVP_DigestInit_ex(&md5Context, evpMd, 0);
    EVP_DigestUpdate(&md5Context, data, dataLen);
    EVP_DigestFinal_ex(&md5Context, md5Digest, nullptr);

    stringstream ss;
    for (size_t i = 0; i < sizeof(md5Digest); ++i) {
        ss << setfill('0') << setw(2) << hex << static_cast<int>(md5Digest[i]);
    }

    return ss.str();
}