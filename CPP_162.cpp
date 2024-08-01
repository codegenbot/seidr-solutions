#include <openssl/evp.h>
#include <string>

using namespace std;

int main() {
    #ifdef _WIN32
       #pragma comment(lib, "libeay32.lib")
        #else
            #include <openssl/ssl.h>
    #endif

    string string_to_md5(string text) {
        if (text.empty()) return "";

        unsigned char result[16];
        EVP_MD_CTX mdctx;
        EVP_MD *md = NULL;
        unsigned char *d = NULL;
        size_t len = 0;

        EVP_MD_CTX_init(&mdctx);
        md = EVP_md5();
        EVP_DigestInit_ex(&mdctx, md, NULL);
        EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
        EVP_DigestFinal_ex(&mdctx, result, &len);

        string output;
        for (int i = 0; i < len; ++i) {
            char c = static_cast<char>(result[i]);
            output += c;
        }

        return output;
    }