#include "sha.h"

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
    assert(string_to_md5("password") == "5baa61e4b9f65e1d7dd2acef62dcab6f");
    return 0;
}