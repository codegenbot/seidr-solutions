#include <iostream>
#include <sstream>
#include <iomanip>

string string_to_md5(string text) {
    MD5_CTX ctx;
    unsigned char hash[16];

    // Convert text to bytes
    std::vector<char> textBytes(text.begin(), text.end());
    textBytes.push_back('\0');

    // Compute the MD5 hash of the input string.
    MD5_Init(&ctx);
    MD5_Update(&ctx, &textBytes[0], textBytes.size());
    MD5_Final(hash, &ctx);

    // Convert the MD5 hash to a hexadecimal string
    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << uppercase << (int)hash[i];
    }

    return ss.str();
}