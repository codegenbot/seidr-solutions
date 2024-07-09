#include <vector>
#include <string>

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int total_chars1 = 0;
    for (const auto& str : lst1) {
        total_chars1 += str.length();
    }
    int total_chars2 = 0;
    for (const auto& str : lst2) {
        total_chars2 += str.length();
    }

    if (total_chars1 < total_chars2) {
        return lst1;
    } else if (total_chars1 > total_chars2) {
        return lst2;
    } else {
        return lst1;
    }
}