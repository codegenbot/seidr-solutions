#include <iostream>
#include <vector>
#include <string>
#include <limits>

float median(vector<float> numbers);

int testMedian() {
    vector<float> numbers;
    std::cout << "Enter the numbers (enter 'stop' to finish): ";
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "stop") break;
        try {
            float num = std::stof(input);
            numbers.push_back(num);
        } catch(const std::invalid_argument& e) {
            std::cout << "Invalid number. Please enter a valid floating point number." << std::endl;
            while (!(std::cin >> input)) {  
                std::cout << "Invalid input. Please try again: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }
    float result = median(numbers);
    std::cout << "The median of the given numbers is: " << result << std::endl;
    return 0;
}

float median(vector<float> numbers) {
    int n = numbers.size();
    if (n == 0) {
        return 0.0f;
    }
    else if (n % 2 == 1) {
        return numbers[n/2];
    }
    else {
        float mid1 = numbers[n/2 - 1];
        float mid2 = numbers[n/2];
        return (mid1 + mid2) / 2.0f;
    }
}