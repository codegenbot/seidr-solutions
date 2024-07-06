#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (const auto& word : split(s, ' ')) {
        result += anti_sort(word) + " ";
    }
    return result;
}

string anti_sort(const string& str) {
    string sortedStr = str;
    sort(sortedStr.begin(), sortedStr.end());
    return sortedStr;
}

vector<string> split(const string& str, char delimeter) {
    vector<string> tokens;
    string token;
    for (const auto& c : str) {
        if (c == delimeter) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}