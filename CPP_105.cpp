#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cassert>

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::map<int, std::string> numToName = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};

    std::sort(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 9) {
            result.push_back(numToName[arr[i]]);
        }
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}