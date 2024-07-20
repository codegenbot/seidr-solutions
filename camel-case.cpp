#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

void split(const string& s, vector<string>& result, char c) {
    size_t pos = 0;
    size_t prev = 0;
    
    while ((pos = s.find(c, prev)) != string::npos) {
        result.push_back(s.substr(prev, pos - prev));
        prev = pos + 1;
    }
    if (prev < s.size())
        result.push_back(s.substr(prev));
}

string camelCase(string s) {
    string result;
    bool first = true;

    for (char c : s) {
        if (c == '-') {
            if (!first) {
                result += toupper(c);
            }
            first = false;
        } else if (c == ' ') {
            if (!first) {
                result += toupper(c);
            }
            first = true;
        } else {
            if (first) {
                result += tolower(c);
            } else {
                result += toupper(c);
            }
            first = false;
        }
    }

    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {
        vector<string> words;
        split(line, words, ' ');
        
        for (const auto& word : words) {
            if (!words.empty())
                cout << camelCase(word);
            else
                cout << camelCase(word);
        }
        cout << endl;
    }
}