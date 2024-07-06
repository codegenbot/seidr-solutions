#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int m = a.size(), n = b.size();
    std::vector<std::string> result;
    
    for (int i = 0; i <= m - b.size(); i++) {
        bool isMatch = true;
        for (int j = 0; j < b.size(); j++) {
            if (a[i + j] != b[j]) {
                isMatch = false;
                break;
            }
        }
        
        if (isMatch) {
            result.push_back(a.substr(i, b.size()));
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