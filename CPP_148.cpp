#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> generate(const std::string& s1, const std::string& s2) {
    std::vector<std::string> result;
    if (s1.size() > s2.size()) {
        for (int i = 0; i <= s2.size(); i++) {
            result.push_back(s1.substr(0, i+1));
        }
        return result;
    } else {
        for (int i = 0; i <= s1.size(); i++) {
            result.push_back(s2.substr(0, i+1));
        }
        return result;
    }
}

bool isSame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (* (a[i].c_str()) != * (b[i].c_str())) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<std::string> result = generate("Jupiter", "Makemake");
    assert(isSame(result, {}));  
}