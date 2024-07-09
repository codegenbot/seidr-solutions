#include <iostream>
#include <limits>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    EVP_MD_CTX *md_ctx = EVP_MD_CTX_new();
    unsigned char* d = nullptr;
    size_t len = 0;
    int ret = EVP_DigestInit_ex(md_ctx, EVP_sha1(), NULL);
    ret = EVP_DigestUpdate(md_ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(md_ctx, &d, &len);
    
    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(d[i]);
        md5_hash += oss.str();
    }
    
    free(d);
    EVP_MD_CTX_free(md_ctx);
    
    return md5_hash;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        input = "";
    }

    string md5_hash = string_to_md5(input);
    
    cout << "MD5 Hash: " << md5_hash << endl;
    return 0;
}