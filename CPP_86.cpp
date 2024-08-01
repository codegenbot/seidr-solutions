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
    return result.substr(0, result.length() - 1);
}

string split(const string& str, const string& delimiter) {
    size_t pos = 0;
    string token;
    vector<string> tokens;
    while ((pos = str.find(delimiter)) != string::npos) {
        token = str.substr(0, pos);
        str.erase(0, pos + delimiter.length());
        tokens.push_back(token);
    }
    tokens.push_back(str);
    return join(tokens, " ");
}

string join(const vector<string>& vec, const string& delimiter) {
    string result;
    for (const auto& str : vec) {
        result += str + delimiter;
    }
    return result.substr(0, result.length() - delimiter.length());
}