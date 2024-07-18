#include <string>

bool issame(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars1 = 0;
    for (const std::string& str : lst1) {
        total_chars1 += str.length();
    }

    int total_chars2 = 0;
    for (const std::string& str : lst2) {
        total_chars2 += str.length();
    }

    return total_chars1 == total_chars2;
}