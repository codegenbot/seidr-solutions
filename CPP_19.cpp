#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> num_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };
    std::map<int, std::string> rev_map = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"}
    };

    std::stringstream ss(numbers);
    std::string word;
    std::vector<int> num_list;

    while (ss >> word) {
        num_list.push_back(num_map[word]);
    }

    std::sort(num_list.begin(), num_list.end());

    std::string result;
    for (size_t i = 0; i < num_list.size(); ++i) {
        if (i > 0) result += " ";
        result += rev_map[num_list[i]];
    }

    return result;
}