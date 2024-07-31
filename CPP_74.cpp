#include <iostream>
#include <vector>
#include <string>
#include <cassert>

int countTotalChars(std::vector<std::string> lst) {
    int totalChars = 0;
    for (std::string str : lst) {
        totalChars += str.size();
    }
    return totalChars;
}

bool total_match(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> total_match(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = countTotalChars(lst1);
    int totalChars2 = countTotalChars(lst2);

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return totalChars1 == totalChars2 ? lst1 : lst2;
    }
}

int main() {
    assert(total_match({"this"}, {}) == {});
    return 0;
}