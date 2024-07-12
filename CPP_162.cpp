#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    stringstream ss;
    SSL_library_init();
    CRYPTO_set_locking_callback(NULL);
    ERR_free_strings();
    ERR_remove_sect163r2();
    ERR_remove_sect163k();
    ERR_remove_sect163g();
    ERR_remove_sect163f();
    ERR_remove_sect163e();
    ERR_remove_sect163d();
    ERR_remove_sect163c();
    ERR_remove_sect163b();
    ERR_remove_sect163a();

    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(mdBuffer, &ctx);

    for (int i = 0; i < 16; i++) {
        sprintf(&ss.str()[0], "%02x", (char)mdBuffer[i]);
        ss.seekp(0);
    }

    return ss.str();
}