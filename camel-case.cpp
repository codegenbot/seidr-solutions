```c++
#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    string result = "";
    int upperNext = true;
    for (int i = 0; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '-') {
            if (!upperNext) {
                result[0] = toupper(result[0]);
                upperNext = true;
            }
            string word = s.substr(i);
            if (word.empty()) break;
            result += word[0];
            for (int j = 1; j < word.size(); j++) {
                result += tolower(word[j]);
            }
        } else if (s[i] == ' ') {
            upperNext = false;
        } else {
            if (!upperNext) {
                result[0] = toupper(result[0]);
                upperNext = true;
            }
            result += s[i];
        }
    }
    return result;
}

int main() {
    string str;
    while (true) {
        cout << "Enter a string in kebab-case: ";
        getline(cin, str);
        cout << "The camelCase is: " << camelCase(str) << endl;
        char response;
        cout << "Continue? (y/n): ";
        cin >> response;
        if (response == 'n') break; // Exit loop on 'n' input
    }
    return 0;
}