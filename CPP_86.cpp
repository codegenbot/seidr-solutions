#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, " ")) {
        string newWord = "";
        for (char c : word) {
            newWord += c;
        }
        sort(newWord.begin(), newWord.end());
        result += newWord + " ";
    }
    return result;
}

string split(const string& str, const string& delimiters) {
    size_t start = 0;
    size_t end = str.find(delimiters);
    vector<string> tokens;

    while (end != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + delimiters.size();
        end = str.find(delimiters, start);
    }

    tokens.push_back(str.substr(start));
    return join(tokens, " ");
}

string join(const vector<string>& vec, const string& delimiter) {
    string result;
    for (const auto& s : vec) {
        if (!result.empty()) {
            result += delimiter;
        }
        result += s;
    }
    return result;
}