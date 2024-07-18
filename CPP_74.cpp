#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size();
}

std::vector<std::string> compare_lists(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    int total_chars1 = 0;
    int total_chars2 = 0;

    for (const std::string& str : lst1) {
        total_chars1 += str.size();
    }

    for (const std::string& str : lst2) {
        total_chars2 += str.size();
    }

    return total_chars1 < total_chars2 ? lst1 : lst2;
}

int main() {
    assert(issame({"this"}, {}));
    return 0;
}