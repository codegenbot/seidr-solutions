#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> odd_count(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (std::string str : lst) {
        int count = 0;
        for (char c : str) {
            if ((c - '0') % 2 != 0) {
                count++;
            }
        }
        result.push_back("the number of odd elements " + std::to_string(count) +
            " in the string " + std::to_string(result.size() + 1) +
            " of the input.");
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(odd_count({ "271", "137", "314" }), {
        "the number of odd elements 1 in the string 1 of the input.",
        "the number of odd elements 2 in the string 2 of the input.",
        "the number of odd elements 2 in the string 3 of the input."
        }));

    return 0;
}