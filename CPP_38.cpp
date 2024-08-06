#include <string>
#include <cassert>

std::string encode_cyclic(const std::string &str) {
    // Implement encoding logic
    // For demonstration purposes, let's shift each character by 1
    std::string encoded = str;
    for (char &c : encoded) {
        if (c != 'z') c++;
        else c = 'a';
    }
    return encoded;
}

std::string decode_cyclic(const std::string &str) {
    // Implement decoding logic
    // Inverse of the encoding logic, shifting each character back by 1
    std::string decoded = str;
    for (char &c : decoded) {
        if (c != 'a') c--;
        else c = 'z';
    }
    return decoded;
}

int main() {
    std::string str = ""; // Declare str here
    str += 'a'; // Append 'a' directly

    std::string encoded_str = encode_cyclic(str); // Change string to std::string
    assert(decode_cyclic(encoded_str) == str); // Ensure str is in scope for assertion
}