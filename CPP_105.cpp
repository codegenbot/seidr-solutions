#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<std::string> arr) {
    std::vector<std::string> result;
    std::vector<std::string> sorted_arr;
    std::map<int, std::string> num_to_name = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };

    for (const std::string& num : arr) {
        if (num == "One" || num == "Two" || num == "Three" || num == "Four" ||
            num == "Five" || num == "Six" || num == "Seven" || num == "Eight" || num == "Nine") {
            sorted_arr.push_back(num);
        }
    }

    std::sort(sorted_arr.begin(), sorted_arr.end(), std::greater<std::string>());

    for (const std::string& num : sorted_arr) {
        result.push_back(num);
    }

    return result;
}