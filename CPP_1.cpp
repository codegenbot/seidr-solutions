#include <vector>
#include <string>

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

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> groups;
    int count = 0;
    std::string group = "";
    
    for (char c : paren_string) {
        group += c;
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }
    
    if (count != 0) {
        groups.clear();
    }
    
    return groups;
}