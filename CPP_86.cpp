#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, " ")) {
        result += word;
        for (char c : word) {
            result += (c < result.back() ? "" : " ") + c;
        }
        result.push_back(' ');
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& s, const string& delimiter) {
    size_t pos = 0, prev = 0;
    string token;
    vector<string> tokens;

    while ((pos = s.find(delimiter, prev)) != string::npos) {
        token = s.substr(prev, pos - prev);
        tokens.push_back(token);
        prev = pos + delimiter.length();
    }

    token = s.substr(prev);
    tokens.push_back(token);

    return tokens.size() > 1 ? tokens : vector<string>({"", s});
}