#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& s) {
    std::vector<std::string> groups;
    int count = 0;
    std::string current;

    for (char c : s) {
        if (c == '(') {
            if (count > 0) {
                current.push_back(c);
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current.push_back(c);
            }
            if (count == 0) {
                groups.push_back(current);
                current.clear();
            }
        }
    }

    return groups;
}