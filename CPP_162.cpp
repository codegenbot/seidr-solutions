#include <cryptopp/sha.h>
#include <string>
#include <iomanip>

using namespace std;
using namespace CryptoPP;

std::string string_to_md5(const std::string& input) {
    SHA256 sha;
    byte hash[SHA256::DIGEST_SIZE];
    sha.Update((byte*)input.c_str(), input.size());
    sha.Finalize(hash);
    return stringFromHex(hash, SHA256::DIGEST_SIZE * 2);
}

int main() {
    assert(string_to_md5("password") == "5baa61e4c9b93f3f068224d0d6b11de5");
    return 0;
}