#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int len = max(a.size(), b.size());
    for (int i = 0; i <= len; i++) {
        if (i >= a.size() || i >= b.size() || a[i] != b[i]) return {};
    }
    return {a, b};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}