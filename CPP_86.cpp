#include <algorithm>

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        result += std::string(word.begin(), word.end());
        if (!result.empty()) {
            result += " ";
        }
    }
    return result;
}

vector<string> split(const string& str, char delim) {
    vector<string> tokens;
    size_t pos = 0;
    size_t prev = 0;
    while ((pos = str.find(delim, prev)) != string::npos) {
        tokens.push_back(str.substr(prev, pos - prev));
        prev = pos + 1;
    }
    tokens.push_back(str.substr(prev));
    return tokens;
}