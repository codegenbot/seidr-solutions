#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update_CTX(&ctx, (const unsigned char*)text.c_str(), text.size());
    MD5_Final_CTX(&ctx, result);
    
    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(result[i]);
        md5_hash += oss.str();
    }
    
    return md5_hash;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    string md5_hash = string_to_md5(input);
    
    cout << "MD5 Hash: " << md5_hash << endl;
    return 0;
}