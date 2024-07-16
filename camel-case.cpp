Here is the completed code:

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string kebabToCamel(const string& s) {
    string result = "";
    for (const auto& word : split(s, " ")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        for (char c : word) {
            if (c == '-') {
                break;
            }
            result += tolower(c);
        }
    }
    return result;
}

string split(const string& s, const char sep) {
    vector<string> words;
    size_t pos = 0;
    while ((pos = s.find(sep)) != string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    words.push_back(s);
    return join(words, " ");
}

string join(const vector<string>& words, const char sep) {
    string result = "";
    for (const auto& word : words) {
        if (!result.empty()) {
            result += sep;
        }
        result += word;
    }
    return result;
}

int main() {
    cout << kebabToCamel("nospaceordash") << endl;
    cout << kebabToCamel("two-words") << endl;
    cout << kebabToCamel("two words") << endl;
    cout << kebabToCamel("all separate words") << endl;
    return 0;
}