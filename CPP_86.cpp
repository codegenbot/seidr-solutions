#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, " ")) {
        result += "#";
        for (char c : word) {
            if (!result.empty() && result.back() <= c) {
                result += c;
            } else {
                result += '#';
                for (char d = 'a'; d <= c; ++d) {
                    result += d;
                }
            }
        }
        result += " ";
    }
    return result.substr(1, result.size() - 2);
}

string split(const string& s, const string& delimiter) {
    size_t pos = 0;
    string token;
    vector<string> tokens;

    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        s.erase(0, pos + delimiter.size());
        tokens.push_back(token);
    }
    tokens.push_back(s);

    return tokens[0];
}