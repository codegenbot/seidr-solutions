#include <cassert>
#include <string>
#include <cctype>
#include <iostream>

std::string encrypt(std::string s);

int test_main() {
    assert(encrypt("a") == "e");
    std::cout << encrypt("Hello World!") << std::endl;
}

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = ((c - base + 2 * 26) % 26) + base;
        }
        result += c;
    }
    return result;
}