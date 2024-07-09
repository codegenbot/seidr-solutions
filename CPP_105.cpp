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

int main() {
    int numArray[] = {9, 4, 8};
    std::vector<std::string> stringArray = {"Nine", "Four", "Eight"};
    std::vector<int> by_length(numArray, numArray + sizeof(numArray) / sizeof(numArray[0]));

    assert(issame(std::vector<std::string>(by_length.begin(), by_length.end()), stringArray));
    return 0;
}