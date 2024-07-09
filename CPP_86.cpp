#include <string>
#include <algorithm>

std::string anti_shuffle(std::string s) {
    std::string result = "";
    std::string temp;
    for (char c : s) {
        if (c == ' ') {
            result += c;
        } else {
            temp += c;
            bool first = true;
            for (char d : s.substr(s.find(c, temp.size()) + 1)) {
                if (d != ' ') {
                    temp += d;
                    first = false;
                }
            }
            if (!first) {
                std::sort(temp.begin(), temp.end());
            }
            result += temp;
            temp.clear();
        }
    }
    return result;
}