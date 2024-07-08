```
#include<iostream>
#include<cctype>
#include<string>

using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = ((c - base + 2 * 26) % 26) + base;
        }
        result += c;
    }
    return result;

}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Encrypted string is: " << encrypt(s) << endl;
    return 0;
}