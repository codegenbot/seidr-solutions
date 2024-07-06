#include <vector>
#include <string>

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;
    
    for (char c : a) {
        if (find(b.begin(),b.end(),c) != b.end()) {
            result.push_back(c+"");
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