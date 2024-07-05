#include <iostream>
#include <iomanip>
#include <sstream>
#include <openssl/evp.h>
#include <string>
#include <cassert>

using namespace std;

string string_to_md5(const string &text) {
    if (text.empty()) return "None";

    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md5(), nullptr);
    EVP_DigestUpdate(ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(ctx, digest, &digest_len);
    EVP_MD_CTX_free(ctx);

    ostringstream oss;
    for (unsigned int i = 0; i < digest_len; ++i)
        oss << hex << setw(2) << setfill('0') << (int)digest[i];

    return oss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    cout << "All tests passed!" << endl;
    return 0;
}