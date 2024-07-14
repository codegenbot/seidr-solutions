#include <iostream>
#include <string>

using namespace std;

string camelCase(string s) {
    vector<string> words = split(s, '-');
    string result;
    for (int i = 0; i < words.size(); i++) {
        if (i > 0) {
            result += toupper(words[i][0]);
        } else {
            result += tolower(words[i][0]);
        }
        result += words[i].substr(1);
    }
    return result;
}

vector<string> split(const string& s, char c) {
    vector<string> res;
    string t;
    for (char x : s) {
        if (x == c)
            res.push_back(t), t = "";
        else
            t += x;
    }
    res.push_back(t);
    return res;
}

int main() {
    string s;
    while (true) {
        cout << "Enter a kebab-case string (or 'q' to quit): ";
        cin >> s;
        if (s == "q") break;
        cout << camelCase(s) << endl;
    }
    return 0;
}