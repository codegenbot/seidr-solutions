#include <iostream>
#include <cctype>
using namespace std;

// Function to encrypt the string
string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + 2 * 26) % 26 + base;
        }
        result += c;
    }
    return result;
}

int main() {
    // Test the function
    assert(encrypt("a") == "e");
    cout << "Encryption test passed.\n";
    return 0;
}