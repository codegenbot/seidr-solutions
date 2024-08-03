#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int count_odd(const std::string &str) {
    int count = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9' && (c - '0') % 2 != 0) {
            count++;
        }
    }
    return count;
}

std::vector<int> odd_count(const std::vector<std::string> &input) {
    std::vector<int> result;
    for (const auto &str : input) {
        result.push_back(count_odd(str));
    }
    return result;
}

bool issame(const std::vector<int> &output, const std::vector<std::string> &expected) {
    if (output.size() != expected.size()) {
        return false;
    }
    for (size_t i = 0; i < output.size(); ++i) {
        if (output[i] != std::stoi(expected[i].substr(expected[i].rfind(' ') + 1))) {
            return false;
        }
    }
    return true;
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