#include <string>

string anti_shuffle(string s) {
    string result = "";
    size_t pos = 0;
    while ((pos = s.find(" ")) != string::npos) {
        string word = s.substr(0, pos);
        for (char &c : word) {
            result += c;
        }
        result.push_back(' ');
        s.erase(0, pos + 1);
    }
    if (!s.empty()) {
        result += s;
    }
    return result;
}