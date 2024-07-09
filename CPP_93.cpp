#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string encode(string message) {
    string result = "";
    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c == base + 1) ? base + 25 : c;
            if (c >= 'a' && c <= 'e') {
                c = (char)(base + ((c - base) + 2) % 26);
            } else if (c >= 'A' && c <= 'E') {
                c = (char)(base + ((c - base) + 2) % 26);
            }
        }
        result += c;
    }
    return result;
}

int main() {
    string message;
    cout << "Enter a message: ";
    getline(cin, message);
    cout << "Encoded message: " << encode(message) << endl;
    return 0;
}