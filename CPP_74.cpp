#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int count_chars(const std::vector<std::string>& lst) {
    int count = 0;
    for (const auto& str : lst) {
        count += str.size();
    }
    return count;
}

std::vector<std::string> total_match(const std::vector<std::string>& lst1, const std::vector<std::string>& lst2) {
    if (count_chars(lst1) < count_chars(lst2)) {
        return lst1;
    }
    return lst2;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));

    return 0;
}