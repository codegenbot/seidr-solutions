#include <iostream>
#include <string>
#include <iomanip>
#include <cryptopp/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    CryptoPP::MD5 md;
    string result = md.ComputeString(text, text.length());
    return result;
}