#include <string>
#include <openssl/evp.h>
#include <cassert>

std::string string_to_md5(const std::string& input);

int main() {
    std::string result = string_to_md5("password");
    return 0;
}