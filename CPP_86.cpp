#include <algorithm>
#include <string>
#include <vector>
#include <initializer_list>

using namespace std;

string join(const vector<string>& vec, const string& sep) {
    string result;
    for (const auto& s : vec) {
        if (!result.empty()) {
            result += sep;
        }
        result += s;
    }
    return result;
}

string split(const string& str, char sep) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(sep)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return join(tokens, " ");
}

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        vector<char> temp(word.begin(), word.end());
        sort(temp.begin(), temp.end());
        result += string(temp.begin(), temp.end()) + " ";
    }
    return result.substr(0, result.size() - 1);
}