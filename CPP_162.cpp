#include <cryptopp/aes.h>
#include <string>
#include <sstream>

using namespace std;
using namespace CryptoPP;

std::string cppString_to_md5(std::string text) {
    MD5 hash;
    unsigned char result[MD5::DIGEST_SIZE];
    hash.Update((const byte*)text.c_str(), text.size());
    hash.Final(result);
    string output;
    stringstream ss;
    for (int i = 0; i < MD5::DIGEST_SIZE; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    output = ss.str();
    return output;
}