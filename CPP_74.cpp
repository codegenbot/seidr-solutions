#include <vector>
#include <string>

int total_chars(const std::vector<std::string>& lst);

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b);

int total_chars(const std::vector<std::string>& lst) {
    int total = 0;
    for (const std::string& str : lst) {
        total += str.length();
    }
    return total;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return total_chars(a) == total_chars(b);
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (total_chars(lst1) == total_chars(lst2)) {
        return lst1;
    }
    return lst2;
}