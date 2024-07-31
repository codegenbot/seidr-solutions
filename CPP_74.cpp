#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    int totalChars1 = 0;
    for (std::string str : a) {
        totalChars1 += str.size();
    }

    int totalChars2 = 0;
    for (std::string str : b) {
        totalChars2 += str.size();
    }

    return totalChars1 == totalChars2;
}

int main() {
    assert(issame({"hello", "world"}, {"hi", "there"}));
    assert(!issame({"apple", "orange"}, {"banana"}));

    return 0;
}