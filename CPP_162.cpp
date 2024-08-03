#include <openssl/evp.h>
#include <ostream>

std::string string_to_md5(const std::string& input);

int main() {
    std::string input;
    std::cin >> input;
    std::string md5_hash = string_to_md5(input);
    std::cout << "MD5 Hash: " << md5_hash << '\n';

    return 0;
}