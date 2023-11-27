#include <iostream>
#include <sstream>
#include <string>
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

    std::vector<std::string> numberList;
    std::stringstream ss(numbers);
    std::string number;

    while (ss >> number) {
        numberList.push_back(number);
    }

    std::sort(numberList.begin(), numberList.end(), [&](const std::string& a, const std::string& b) {
        return numberMap[a] < numberMap[b];
    });

    std::string sortedNumbers;
    for (const std::string& num : numberList) {
        sortedNumbers += num + " ";
    }

    return sortedNumbers;
}