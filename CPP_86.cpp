#include <algorithm>
#include <string>

using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        result += std::string(word.begin(), word.end());
        for (auto i = 0; i < word.size(); ++i) {
            for (auto j = i + 1; j <= word.size(); ++j) {
                if (word[i] > word[j]) {
                    swap(word[i], word[j]);
                }
            }
        }
        result += " ";
    }
    return result;
}

string split(const string& s, char c) {
    size_t pos = 0;
    vector<string> tokens;
    while ((pos = s.find(c)) != string::npos) {
        tokens.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }
    tokens.push_back(s);
    return join(tokens, ' ');
}

string join(const vector<string>& v, char c) {
    string result;
    for (const auto& str : v) {
        result += str;
        result += c;
    }
    if (!result.empty()) {
        result.pop_back();
    }
    return result;
}