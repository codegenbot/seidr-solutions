#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int count_odd_elements(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9' && (c - '0') % 2 == 1) {
            count++;
        }
    }
    return count;
}

bool issame(const std::vector<int>& counts, const std::vector<std::string>& expected) {
    if (counts.size() != expected.size()) {
        return false;
    }
    for (size_t i = 0; i < counts.size(); ++i) {
        if (counts[i] != std::stoi(expected[i].substr(expected[i].find("of odd elements ") + 16, 1))) {
            return false;
        }
    }
    return true;
}

std::vector<int> odd_count(const std::vector<std::string>& input) {
    std::vector<int> counts;
    for (const std::string& str : input) {
        counts.push_back(count_odd_elements(str));
    }
    return counts;
}

void test_issame() {
    assert(issame(odd_count({"271", "137", "314"}), {
        "the number of odd elements 2 in the string 271 of the input.",
        "the number of odd elements 2 in the string 137 of the input.",
        "the number of odd elements 3 in the string 314 of the input."
    }));
}

int main() {
    test_issame();
    return 0;
}