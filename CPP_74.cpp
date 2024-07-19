#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int countChars(const std::vector<std::string>& lst) {
    int count = 0;
    for (const std::string& str : lst) {
        count += str.size();
    }
    return count;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (countChars(lst1) < countChars(lst2)) {
        return lst1;
    }
    return lst2;
}