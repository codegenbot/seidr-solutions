#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> bf(std::string a, std::string b) {
    int n = (int)a.length() + (int)b.length();
    std::vector<char> res(n);
    
    for(int i = 0; i < a.length(); i++) {
        res[i] = a[i];
    }
    
    for(int i = 0, j = a.length(); i < b.length(); i++,j++) {
        res[j] = b[i];
    }
    
    std::string result;
    for(char c : res) {
        if(c != '\0') {
            result.push_back(c);
        } else {
            break;
        }
    }
    
    return {result};
}

bool issame(std::vector<std::string> a, std::string b) {
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(),b.end(),a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}