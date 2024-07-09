#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length;

int main() {
    int numArray[] = {9, 4, 8};
    std::vector<std::string> stringArray = {"Nine", "Four", "Eight"};

    for (int i : numArray) {
        by_length.push_back(std::to_string(i));
    }

    assert(issame(by_length, stringArray));
    return 0;
}