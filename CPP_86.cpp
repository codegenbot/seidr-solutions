```
#include <initializer_list>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string join(const vector<string>& vec, const string& sep) {
    string result;
    for (const auto& s : vec) {
        result.append(s + sep);
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& str, char sep) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(sep)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    tokens.push_back(str);
    return join(tokens, " ");
}

string anti_shuffle(string s) {
    vector<string> words;
    string word = "";
    for (const auto& c : s) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    string result = "";
    for (const auto& word : words) {
        string w = word;
        sort(w.begin(), w.end());
        result.append(w + " ");
    }
    return result.substr(0, result.size() - 1);
}