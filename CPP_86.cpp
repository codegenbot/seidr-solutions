```cpp
#include <algorithm>
using namespace std;

std::string anti_shuffle(std::string s) {
    std::string result = "";
    for (const auto& word : split(s, " ")) {
        string temp = word;
        sort(temp.begin(), temp.end());
        result += temp + " ";
    }
    return result.substr(0, result.size() - 1);
}

std::string split(const std::string& str, const std::string& delimiter) {
    size_t pos = 0;
    vector<std::string> tokens;
    while ((pos = str.find(delimiter)) != string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delimiter.length());
    }
    tokens.push_back(str);
    return tokens.size() > 1 ? tokens : vector<std::string>();
}