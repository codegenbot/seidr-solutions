#include <algorithm>
#include <string>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        for (char c : word) {
            result += (c <= result.back()) ? c : " ";
            for (; c > result.back(); ++result.back());
        }
        result += ' ';
    }
    return result.substr(0, result.size() - 1);
}

string split(const string& s, char c) {
    vector<string> v;
    string temp = "";
    for (const auto& ch : s) {
        if (ch == c) {
            v.push_back(temp);
            temp = "";
        } else {
            temp += ch;
        }
    }
    v.push_back(temp);
    return join(v, ' ');
}

string join(const vector<string>& v, char c) {
    string result = "";
    for (const auto& s : v) {
        result += s + c;
    }
    return result.substr(0, result.size() - 1);
}