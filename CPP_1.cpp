#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& input) {
    std::vector<std::string> groups;
    int count = 0;
    std::string current_group;

    for (char c : input) {
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
                current_group.clear();
            }
        }
    }

    return groups;
}