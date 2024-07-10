#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] + b[i] != sortListSum({{a[i], b[i]}})[0]) return false;
    }
    return true;
}

std::vector<std::string> sortListSum(std::vector<std::pair<std::string, std::string>> v) {
    std::sort(v.begin(), v.end());
    std::vector<std::string> result;
    for (const auto& pair : v) {
        result.push_back(pair.first + pair.second);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::pair<std::string, std::string>> pairs;
    for(int i = 0; i < n; i++) {
        std::string s1, s2;
        std::cin >> s1 >> s2;
        pairs.push_back({s1, s2});
    }
    
    std::vector<std::string> a, b;
    for(const auto& pair : pairs) {
        if(pair.first.length() < pair.second.length()) {
            a.push_back(pair.first);
            b.push_back(pair.second);
        } else {
            a.push_back(pair.second);
            b.push_back(pair.first);
        }
    }
    
    std::cout << (issame(a, b) ? "YES" : "NO") << std::endl;
    
    return 0;
}