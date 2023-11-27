#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string sort_numbers(std::string numbers) {
    std::vector<std::string> numberals = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    std::vector<std::string> sorted_numbers;

    // Split the input string by space delimiter
    std::string delimiter = " ";
    size_t pos = 0;
    std::string number;
    while ((pos = numbers.find(delimiter)) != std::string::npos) {
        number = numbers.substr(0, pos);
        numbers.erase(0, pos + delimiter.length());

        // Find the corresponding numberal and add it to the sorted_numbers vector
        for (int i = 0; i < numberals.size(); i++) {
            if (numberals[i] == number) {
                sorted_numbers.push_back(number);
                break;
            }
        }
    }

    // Add the last number to the sorted_numbers vector
    for (int i = 0; i < numberals.size(); i++) {
        if (numberals[i] == numbers) {
            sorted_numbers.push_back(numbers);
            break;
        }
    }

    // Sort the sorted_numbers vector
    std::sort(sorted_numbers.begin(), sorted_numbers.end());

    // Create the result string by joining the sorted numbers with space delimiter
    std::string result;
    for (int i = 0; i < sorted_numbers.size(); i++) {
        result += sorted_numbers[i];
        if (i < sorted_numbers.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter space-delimited string of numberals: ";
    std::getline(std::cin, input);
    std::string sorted = sort_numbers(input);
    std::cout << "Sorted numbers: " << sorted << std::endl;

    return 0;
}