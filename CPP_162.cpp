```cpp
#include <iostream>
#include <limits>
#include <string>
#include <iomanip> 
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    EVP_MD_CTX md_ctx;
    unsigned char* d = nullptr;
    size_t len = 0;
    int ret = EVP_Digest(text.c_str(), text.size(), &d, &len, EVP_md_md5(), &md_ctx);
    
    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        sprintf(temp, "%02x", d[i]); // temp is a char array of sufficient size
        md5_hash += string(temp);
    }
    
    free(d);
    EVP_MD_CTX_free(&md_ctx);
    
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