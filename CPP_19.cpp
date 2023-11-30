#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

std::string sort_numbers(std::string numbers) {
    std::map<std::string, int> numberMap = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    std::vector<int> numberList;
    std::stringstream ss(numbers);
    std::string number;
    
    while (ss >> number) {
        numberList.push_back(numberMap[number]);
    }
    
    std::sort(numberList.begin(), numberList.end());
    
    std::stringstream result;
    for (int i = 0; i < numberList.size(); i++) {
        result << numberList[i];
        if (i != numberList.size() - 1) {
            result << " ";
        }
    }
    
    return result.str();
}