#include <iostream>
#include <map>
#include <string>
#include <cassert>

std::string sort_numbers(std::string numbers);

std::string sort_numbers(std::string numbers) {
    std::string result = "";
    std::map<int, std::string> reverse_map;

    size_t pos = 0;
    std::string token;
    while ((pos = numbers.find(" ")) != std::string::npos) {
        token = numbers.substr(0, pos);
        reverse_map[number_map[token]] = token;
        numbers.erase(0, pos + 1);
    }

    reverse_map[number_map[numbers]] = numbers;

    for (const auto& pair : reverse_map) {
        result += pair.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    std::map<std::string, int> number_map = {
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

    std::string numbers;
    std::cout << "Enter a list of numbers in words separated by spaces: ";
    std::getline(std::cin, numbers);

    std::string sorted_numbers = sort_numbers(numbers);
    std::cout << "Sorted numbers: " << sorted_numbers << std::endl;

    return 0;
}