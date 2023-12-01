#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> numberMapping = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };

    std::istringstream iss(numbers);
    std::string word;
    std::vector<int> numberList;

    while (iss >> word) {
        numberList.push_back(numberMapping[word]);
    }
    
    std::sort(numberList.begin(), numberList.end());

    std::ostringstream oss;
    for (int i = 0; i < numberList.size(); ++i) {
        oss << numberList[i];
        if (i != numberList.size() - 1) {
            oss << " ";
        }
    }

    return oss.str();
}