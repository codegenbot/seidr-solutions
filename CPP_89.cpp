#include <string>
#include <cctype>

std::string encrypt(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + 2*2) % 26 + base;
        }
        result += c;
    }
    return result;
}

int main() {
    assert(encrypt("a") == "e");
    // Test your encrypt function with different inputs
    return 0;
}