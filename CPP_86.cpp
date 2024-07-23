```
#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (const auto& word : split(s, ' ')) {
        for (char c : word) {
            result += (c <= result.back()) ? c : " ";
            for (; c > result.back(); ++result.back());
        }
        result += ' ';
    }
    return result.substr(0, result.size() - 1);
}

std::string split(const std::string& s, char c) {
    vector<std::string> v;
    std::string temp = "";
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

std::string join(const vector<std::string>& v, char c) {
    std::string result = "";
    for (const auto& s : v) {
        result += s + c;
    }
    return result.substr(0, result.size() - 1);
}