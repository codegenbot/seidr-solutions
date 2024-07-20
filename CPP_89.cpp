```cpp
#include <string>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            int shift = (c - base + 2 * 2) % 26;
            result += ((shift < 26) ? (char)(base + shift)) : ((isupper(c)) ? (char)((base + shift - 26))) : (char)(base + shift));
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Encrypted string: " << encrypt(input) << endl;
    return 0;
}