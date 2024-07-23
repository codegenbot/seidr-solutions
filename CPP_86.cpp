#include <string>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    size_t pos = s.find(" ");
    while (pos != std::string::npos) {
        string word = s.substr(0, pos);
        for (char &c : word) {
            result += c;
        }
        result.push_back(' ');
        s.erase(0, pos + 1);
        pos = s.find(" ");
    }
    if (!s.empty()) {
        result += s;
    }
    return result;
}