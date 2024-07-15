#include <string>
#include <cassert>

std::string encrypt(std::string s) {
    assert(encrypt("a") == "e");
    // Add more test cases if needed

    std::string result = "";
    for (char c : s) {
        if (std::isalpha(c)) {
            char encrypted = c + 2 * 2;
            if (std::islower(c)) {
                if (encrypted > 'z') {
                    encrypted = 'a' + (encrypted - 'z' - 1);
                }
            } else {
                if (encrypted > 'Z') {
                    encrypted = 'A' + (encrypted - 'Z' - 1);
                }
            }
            result += encrypted;
        } else {
            result += c;
        }
    }
    return result;
}