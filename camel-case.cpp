#include <iostream>
#include <string>
using namespace std;

string kebabToCamel(string str) {
    string result = "";
    string currentWord = "";

    for (char c : str) {
        if (c == '-') {
            if (!currentWord.empty()) {
                result += toupper(currentWord[0]);
                currentWord = currentWord.substr(1);
            }
        } else if (c == ' ') {
            if (!currentWord.empty()) {
                result += currentWord;
                currentWord = "";
            }
        } else {
            currentWord += c;
        }
    }

    if (!currentWord.empty()) {
        result += toupper(currentWord[0]);
        currentWord = currentWord.substr(1);
        result += currentWord;
    }

    return result;
}

int main() {
    string str;
    while (cin >> str) {
        cout << kebabToCamel(str) << endl;
    }
    return 0;
}