#include <string>
#include <cassert>

std::string encode_cyclic(const std::string &str) {
    std::string encoded = str;
    for (char &c : encoded) {
        if (c != 'z') c++;
        else c = 'a';
    }
    return encoded;
}

std::string decode_cyclic(const std::string &str) {
    std::string decoded = str;
    for (char &c : decoded) {
        if (c != 'a') c--;
        else c = 'z';
    }
    return decoded;
}

int main() {
    std::string str;
    char chr = 'a';
    str += chr;

    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
}