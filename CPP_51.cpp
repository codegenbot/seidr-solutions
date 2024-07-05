#include <iostream>
#include <string>
using namespace std;

string remove_vowels(const string &text) {
    string result;
    for (char ch : text) {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;
        }
    }
    return result;
}

int main() {
    cout << remove_vowels("Hello World") << endl;
    return 0;
}