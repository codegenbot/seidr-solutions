#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string remove_vowels(string text) {
    string result = "";

    for (char c : text) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            result += c;
        }
    }

    return result;
}

int main() {
    cout << remove_vowels("") << endl;
    cout << remove_vowels("abcdef\nghijklm") << endl;
    cout << remove_vowels("abcdef") << endl;
    cout << remove_vowels("aaaaa") << endl;
    cout << remove_vowels("aaBAA") << endl;
    cout << remove_vowels("zbcd") << endl;

    return 0;
}