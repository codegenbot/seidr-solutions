#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/err.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    OpenSSL_add_all_algorithms();
    unsigned char md[16];
    stringstream ss;
    
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_MD *md_algorithm = NULL;
    int rc = EVP_DigestInit_ex(ctx, EVP_md5(), 0);
    if (rc == 1) {
        EVP_DigestUpdate(ctx, text.c_str(), text.size());
        unsigned char *digest = NULL;
        rc = EVP_DigestFinal_ex(ctx, md, &digest);
        if (rc == 1) {
            for (int i = 0; i < 16; ++i) {
                ss << setfill('0') << setw(2) << hex << (int)md[i];
            }
        }
    }
    EVP_MD_CTX_free(ctx);
    return ss.str();
}