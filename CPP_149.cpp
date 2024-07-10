#include <vector>
#include <algorithm>
#include <iostream>
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