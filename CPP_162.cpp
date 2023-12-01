#include <iostream>
#include <string>
#include <cryptopp/md5.h>

using namespace std;
using namespace CryptoPP;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }
    byte digest[MD5::DIGESTSIZE];
    CryptoPP::Weak::MD5 hash;
    hash.Update((const byte*)text.data(), text.size());
    hash.Final(digest);
    
    char encoded[MD5::DIGESTSIZE * 2 + 1];
    for (int i = 0; i < MD5::DIGESTSIZE; i++) {
        sprintf_s(encoded + i * 2, 3, "%02x", digest[i]);
    }
    
    return string(encoded);
}

#include <cryptopp/md5.h>