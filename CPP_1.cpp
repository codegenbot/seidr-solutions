#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> groups;
    int count = 0;
    std::string current_group = "";

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
                groups.push_back(current_group);
                current_group = "";
            }
        }
    }

    return groups;
}