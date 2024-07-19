#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> by_length(std::vector<int> arr){
    std::vector<std::string> result;
    std::map<int, std::string> numToString = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    std::vector<int> sortedArr;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            sortedArr.push_back(num);
        }
    }

    std::sort(sortedArr.begin(), sortedArr.end());

    std::reverse(sortedArr.begin(), sortedArr.end());

    for (int num : sortedArr) {
        result.push_back(numToString[num]);
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

assert (issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));