#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, " ")) {
        for (char c : word) {
            result += c;
        }
        for (char c : word) {
            size_t pos = 0;
            while ((pos = word.find(c)) != string::npos) {
                word.replace(pos, 1, "");
                break;
            }
        }
        if (!result.empty()) {
            result += " ";
        }
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

string join(const vector<string>& strs, const string& delimiter) {
    string result;
    for (const auto& str : strs) {
        if (!result.empty()) {
            result += delimiter;
        }
        result += str;
    }
    return result;
}