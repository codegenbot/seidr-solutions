// Include necessary header files
#include <iostream>
#include <string>

// Define the encrypt function with correct return type and argument type
std::string encrypt(std::string s) {
    std::string encrypted = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            encrypted += (((c - base) + 2 * 2) % 26) + base;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

// Define the main function
int main() {
    // Test the encrypt function
    assert(encrypt("a") == "e");

    return 0;
}