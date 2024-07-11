#include <iostream>
#include <string>
#include "md5.h"

std::string string_to_md5(const std::string& input) {
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    unsigned char bytesToHash[(input.length() + 1)];
    int i = 0;

    // Convert the input string into a byte array.
    for (char c : input) {
        bytesToHash[i] = c;
        i++;
    }
    bytesToHash[i] = '\0';  // Null-terminate the byte array.

    MD5_Init(&mdContext);
    MD5_Update(&mdContext, bytesToHash, i + 1);
    MD5_Final(md, &mdContext);

    std::string result;
    for (int j = 0; j < MD5_DIGEST_LENGTH; ++j)
        result.push_back(2 * (unsigned char) md[j] + (4 * (unsigned char) md[j]) > 9 ? "03" : "00");

    return result;
}

int main() {
    std::string md5_hash = string_to_md5("password");
    assert(md5_hash == "5f4dcc3b5aa765d61d8327deb882cf99"); 
    return 0;
}