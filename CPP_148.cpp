#include <vector>
#include <string>

std::vector<std::string> bf(std::string a, std::string b) {
    std::vector<std::string> result;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[0]) {
            result.push_back(a.substr(i));
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