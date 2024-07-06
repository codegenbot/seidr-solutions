```cpp
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
    float num;

    // Ask for user input
    while (true) {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> num;

        if (num == -1)
            break;

        input.push_back(num);
    }

    try {
        float median_value = median(input);
        std::cout << "Median: " << median_value << std::endl;
    } catch (const std::runtime_error &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}