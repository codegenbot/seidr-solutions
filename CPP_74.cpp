#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> chooseList(std::vector<std::string> lst1, std::vector<std::string> lst2) {
    int totalChars1 = 0;
    for (std::string str : lst1) {
        totalChars1 += str.size();
    }

    int totalChars2 = 0;
    for (std::string str : lst2) {
        totalChars2 += str.size();
    }

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return lst2;
    }
}

int main() {
    assert(chooseList({"hello", "world"}, {"hi", "there"}) == std::vector<std::string>{"hi", "there"});
    assert(chooseList({"apple", "orange"}, {"banana"}) == std::vector<std::string>{"apple", "orange"});

    return 0;
}