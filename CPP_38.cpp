#include <iostream>
#include <string> // Include the <string> library

std::string encode_cyclic(std::string s) {
    // Function remains the same
}

std::string decode_cyclic(std::string s) {
    // Function remains the same
}

int main() {
    std::string s = "abcde"; // Changed 'str' to 's'
    std::string encoded_str = encode_cyclic(s); // Added 'std::' before string

    assert(std::decode_cyclic(encoded_str) == s); // Added 'std::' before assert

    std::cout << "Original: " << s << std::endl;
    std::cout << "Encoded: " << encoded_str << std::endl;
    std::cout << "Decoded: " << std::decode_cyclic(encoded_str) << std::endl; // Added 'std::' before decode_cyclic

    return 0;
}