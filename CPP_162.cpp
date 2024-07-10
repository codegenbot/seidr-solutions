#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    EVP_MD_CTX md_ctx;
    unsigned char hash[16];
    const EVP_MD* md = EVP_md5();
    unsigned char* key = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.size();

    EVP_DigestInit_ex(&md_ctx, md, 0);
    EVP_DigestUpdate(&md_ctx, key, len);
    EVP_DigestFinal_ex(&md_ctx, hash, nullptr);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << static_cast<int>(hash[i]);
    }

    return ss.str();
}