#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> numbers;
    for (int num : arr) {
        if (issame({std::to_string(num)}, {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"})) {
            numbers.push_back(std::to_string(num) + std::string(" ") + get_number_name(num));
        }
    }
    std::sort(numbers.begin(), numbers.end());
    std::reverse(numbers.begin(), numbers.end());
    return numbers;
}

std::string get_number_name(int num) {
    switch (num) {
        case 1:
            return "One";
        case 2:
            return "Two";
        case 3:
            return "Three";
        case 4:
            return "Four";
        case 5:
            return "Five";
        case 6:
            return "Six";
        case 7:
            return "Seven";
        case 8:
            return "Eight";
        case 9:
            return "Nine";
    }
}