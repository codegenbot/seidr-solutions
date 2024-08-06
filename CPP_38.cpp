#include <iostream>
#include <cassert>

int main() {
    std::string str, chr;
    std::cin >> str >> chr;
    str += chr;
    std::string encoded_str = encode_cyclic(str);
    assert(decode_cyclic(encoded_str) == str);
    std::cout << "Test passed" << std::endl;
    return 0;
}