#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

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

    std::istringstream iss(numbers);
    std::vector<std::string> numberList;
    std::string number;

    while (iss >> number) {
        numberList.push_back(number);
    }

    std::sort(numberList.begin(), numberList.end(), [&](const std::string& a, const std::string& b) {
        return numberMap[a] < numberMap[b];
    });

    std::string sortedNumbers;
    for (const auto& num : numberList) {
        sortedNumbers += num + " ";
    }

    return sortedNumbers;
}

int main() {
    std::string input;
    std::cout << "Enter space-delimited string of numbers: ";
    std::getline(std::cin, input);

    std::string sortedNumbers = sort_numbers(input);
    std::cout << "Sorted numbers: " << sortedNumbers << std::endl;

    return 0;
}