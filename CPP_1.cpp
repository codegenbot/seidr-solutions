#include <vector>
#include <string>
#include <cassert>
#include <stack>

bool compare_vectors(const std::vector<std::string>& a, const std::vector<std::string>& b){
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

std::vector<std::string> separate_paren_groups(const std::string& input){
    std::vector<std::string> groups;
    std::string current_group;
    int level = 0;

    for (const char& c : input) {
        if (c == '(') {
            if (level > 0) {
                current_group += c;
            }
            level++;
        } else if (c == ')') {
            level--;
            if (level > 0) {
                current_group += c;
            } else if (level == 0 && !current_group.empty()) {
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}