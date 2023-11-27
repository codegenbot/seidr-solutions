#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string sort_numbers(std::string numbers) {
    std::vector<std::string> numberals = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };

    std::vector<std::string> sortedNumbers;
    std::string currentNumber;

    for (char c : numbers) {
        if (c == ' ') {
            sortedNumbers.push_back(currentNumber);
            currentNumber.clear();
        } else {
            currentNumber += c;
        }
    }

    sortedNumbers.push_back(currentNumber);

    std::sort(sortedNumbers.begin(), sortedNumbers.end(), [&numberals](const std::string& a, const std::string& b) {
        return std::find(numberals.begin(), numberals.end(), a) < std::find(numberals.begin(), numberals.end(), b);
    });

    std::string result;
    for (const std::string& number : sortedNumbers) {
        result += number + " ";
    }

    result.pop_back(); // Remove last space

    return result;
}