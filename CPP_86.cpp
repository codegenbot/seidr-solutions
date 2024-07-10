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

string split(const string& str, const string& delimiter) {
    size_t pos = 0;
    vector<string> tokens;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens.size() > 1 ? tokens : vector<string>();
}