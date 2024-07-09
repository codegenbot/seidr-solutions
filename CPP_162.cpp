```c++
#include <string>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>

using std::string;
using std::stringstream;
using std::setfill;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    OpenSSL_add_all_algorithms();
    EVP_MD_CTX mdctx;
    unsigned char *d = NULL;
    unsigned int len = 0;
    EVP_MDAOParams mdoParams;

    EVP_MD_CTX_init(&mdctx);
    if (1 != EVP_DigestInit_ex(&mdctx, EVP_md5(), &mdoParams))
        return "";

    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, md5, &len);

    stringstream ss;
    for (int i = 0; i < len; ++i)
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md5[i];
    
    return ss.str();
}