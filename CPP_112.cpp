#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string s = "";
    for (char ch : a[0]) {
        if (b[0].find(ch) == std::string::npos) {
            s += ch;
        }
    }
    std::string s_reverse = s;
    std::reverse(s_reverse.begin(), s_reverse.end());
    return {s, s == s_reverse ? "True" : "False"};
}