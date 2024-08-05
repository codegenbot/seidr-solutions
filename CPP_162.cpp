#include <iostream>
#include <string>
#include <cassert>

// Include necessary headers
#include <openssl/md5.h>

// Define string_to_md5 function
std::string string_to_md5(const std::string& input) {
    MD5_CTX context;
    MD5_Init(&context);
    MD5_Update(&context, input.c_str(), input.length());

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_Final(digest, &context);

    char md5Result[2*MD5_DIGEST_LENGTH + 1];
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(&md5Result[i*2], "%02x", (unsigned int)digest[i]);

    return std::string(md5Result);
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << string_to_md5(input) << std::endl;
    return 0;
}

// Add necessary code outside main function