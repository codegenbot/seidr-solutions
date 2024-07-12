#include<string>
#include<algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    for (auto word : split(s, " ")) {
        result += antiArrange(word) + " ";
    }
    return result.substr(0, result.size() - 1);
}

string antiArrange(string s) {
    string result = "";
    for (char c : s) {
        result += static_cast<char>(c);
    }
    sort(result.begin(), result.end());
    return result;
}

vector<string> split(const string& str, const string& delimiter) {
    vector<string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens;
}