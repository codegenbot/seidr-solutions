#include <openssl/ssl.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX ctx;
    unsigned char md5[16];
    unsigned char *p = NULL;
    string result;

    EVP_MD_CTX_init(&ctx);
    p = reinterpret_cast<unsigned char*>(text.c_str());
    EVP_MD_CTX_update(&ctx, p, text.size());
    EVP_MD_CTX_final(&ctx, md5);

    for (int i = 0; i < 16; i++) {
        ostringstream ss;
        ss << hex << std::setw(2) << std::setfill('0') << (int)md5[i];
        result += ss.str();
    }

    return result;
}