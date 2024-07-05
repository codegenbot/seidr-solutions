#include <iostream>
#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c) && islower(c))
            result += (c - 'a' + 4) % 26 + 'a';
        else
            result += c; // Preserve non-lowercase characters
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string to encrypt: ";
    cin >> input;
    cout << "Encrypted string: " << encrypt(input) << endl;
    return 0;
}