#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>

bool areSame(std::vector<std::string> list1, std::vector<std::string> list2) {
    std::sort(list1.begin(), list1.end());
    std::sort(list2.begin(), list2.end());
    return list1 == list2;
}

std::vector<std::string> sortedListSum(std::vector<std::string> inputList) {
    std::sort(inputList.begin(), inputList.end());
    return inputList;
}

// In the main function
int main() {
    assert(areSame(sortedListSum({"aaaa", "bbbb", "dd", "cc"}), {"cc", "dd", "aaaa", "bbbb"}));
}