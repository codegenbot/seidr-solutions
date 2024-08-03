#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, " ")) {
        string temp = word;
        sort(temp.begin(), temp.end());
        result += temp + " ";
    }
    return result.substr(0, result.size() - 1);
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

string join(const vector<string>& tokens, const string& delimiter) {
    string result;
    for (const auto& token : tokens) {
        result += token + delimiter;
    }
    return result.substr(0, result.size() - delimiter.size());
}