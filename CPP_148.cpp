#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int m = a.length(), n = b.length();
    for (int i = 0; i <= m - b.length(); i++) {
        if (a.substr(i, b.length()) == b) return {a.substr(0, i), a.substr(i + b.length())};
    }
    return {};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}