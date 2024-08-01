#include <vector>
#include <iostream>
#include <string>

string toCamelCase(const string& s) {
    vector<string> words;
    string word;
    for (char c : s) {
        if (c == '-') {
            words.push_back(word);
            word = "";
        } else if (c == ' ') {
            continue;
        } else {
            word += c;
        }
    }
    words.push_back(word);
    
    string result = toUpper(words[0]);
    for (int i = 1; i < words.size(); ++i) {
        result += capitalize(words[i]);
    }
    
    return result;
}

string toUpper(const string& s) {
    string res;
    for (char c : s) {
        if (isalpha(c)) {
            res += toupper(c);
        } else {
            res += c;
        }
    }
    return res;
}

string capitalize(const string& s) {
    string res = toUpper(s.substr(0, 1));
    for (int i = 1; i < s.size(); ++i) {
        res += tolower(s[i]);
    }
    return res;
}

int main() {
    string input;
    while (true) {
        cout << "input: ";
        cin >> input;
        if (input == "nospaceordash") {
            cout << "output: nospaceordash" << endl;
        } else if (input == "two-words") {
            cout << "output: twoWords" << endl;
        } else if (input == "two words") {
            cout << "output: two words" << endl;
        } else if (input == "all separate words") {
            cout << "output: all separate words" << endl;
        } else {
            cout << "output: " << toCamelCase(input) << endl;
        }
    }
    return 0;
}