#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> result;
    int count = 0;
    std::string current_group;
    
    for (char c : s) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            }
            if (count == 0) {
                result.push_back(current_group);
                current_group.clear();
            }
        }
    }
    
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}