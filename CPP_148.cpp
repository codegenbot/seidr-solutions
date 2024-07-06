#include <vector>
#include <string>

std::vector<std::string> bf(std::string a, std::string b) {
    int i = 0, j = 0;
    std::vector<std::string> result;
    while(i < a.size() && j < b.size()) {
        if(a[i] == b[j]) {
            result.push_back(b.substr(j, 1));
            i++;
            j++;
        } else if(a[i] < b[j]){
            i++;
        } else {
            j++;
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