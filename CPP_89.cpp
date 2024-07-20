Here is the modified code:

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
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "Encrypted string: " << encrypt(s) << endl;
    return 0;
}