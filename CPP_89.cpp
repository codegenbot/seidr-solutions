#include <string>

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isalpha(c) ? (c >= 'A' && c <= 'Z') ? 'A' : 'a' : 'a';
            int shift = (c - base + 3) % 26;
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
    getline(cin, s);
    cout << "Encrypted String: " << encrypt(s) << endl;
    return 0;
}