#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool isEqual(std::vector<std::string>, std::vector<std::string>);

std::pair<std::vector<std::string>, bool> reverse_delete(const std::string& str1, const std::string& str2) {
    std::vector<std::string> result;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == 'a' && str2[i] != 'a') {
            result.push_back("");
        } else if (str1[i] == 'm' && str2[i] != 'm') {
            result.push_back("True");
        } else {
            result.push_back(std::string(1, str1[i]));
        }
    }
    return {result, true};
}

bool isEqual(std::vector<std::string> v1, std::vector<std::string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    auto result = reverse_delete("mamma", "mia");
    assert(isEqual({result.first}, {"", "True"}));  
    return 0;
}