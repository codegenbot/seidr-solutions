#include <iostream>
#include <vector>
#include <algorithm>

float median(std::vector<float> numbers) {
    if (numbers.empty()) 
        throw std::runtime_error("Input vector is empty");
    
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return ((numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0);
    else
        return numbers[numbers.size()/2];

int main()
{
    std::vector<float> input;
    float number;

    // Input the numbers from user
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> number;

        if (number == -1)
            break;

        input.push_back(number);
    }

    try {
        float result = median(input);
        std::cout << "Median: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1; // Error occurred
    }

    return 0;
}