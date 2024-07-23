#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    if (str1.size() != str2.size()) {
        return false;
    }
    for (int i = 0; i < str1.size(); i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (int i = 0; i < lst.size(); i++) {
        int count = 0;
        for (char c : lst[i]) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        if (count > 0) {
            result.push_back("The string " + std::to_string(i+1) + " has " + std::to_string(count) + " odd digits.");
        } else {
            result.push_back("The string " + std::to_string(i+1) + " does not have any odd digits.");
        }
    }
    return result;
}