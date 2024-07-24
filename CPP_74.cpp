#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

int total_chars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.size();
    }
    return total;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}