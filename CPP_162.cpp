#include <iostream>
#include <string>
#include <algorithm>
#include <cryptopp/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    CryptoPP::MD5 hash;
    CryptoPP::StringSource(text, true, new CryptoPP::HashFilter(hash));
    CryptoPP::StringSink result;
    CryptoPP::HashFilter filter(hash, new CryptoPP::HexEncoder(new CryptoPP::StringSink(result)));

    string md5 = result.GetString();
    return md5;
}