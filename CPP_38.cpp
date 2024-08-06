#include <string>
#include <cassert>

std::string encode_cyclic(const std::string &str) {
    std::string encodedStr = str;
    for (char &c : encodedStr) {
        if (c != 'z') c++;
        else c = 'a';
    }
    return encodedStr;
}

std::string decode_cyclic(const std::string &str) {
    std::string decodedStr = str;
    for (char &c : decodedStr) {
        if (c != 'a') c--;
        else c = 'z';
    }
    return decodedStr;
}

int main() {
    std::string str = "";
    char chr = 'a';
    str += chr;

    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
}