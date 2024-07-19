#include <string>

int total_chars(std::vector<std::string> lst) {
    int total = 0;
    for (std::string s : lst) {
        total += s.length();
    }
    return total;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    if (total_chars(lst1) < total_chars(lst2)) {
        return lst1;
    } else {
        return lst2;
    }
}