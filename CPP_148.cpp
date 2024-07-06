#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string c) {
    std::vector<std::string> result;
    for (int i = 0; i < a.length(); i++) {
        for (int j = i + 1; j <= a.length(); j++) {
            result.push_back(a.substr(i, j - i));
        }
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}