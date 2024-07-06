```
#include <iostream>
#include <vector>
#include <algorithm>

float median(std::vector<float> numbers) {
    if (numbers.empty()) 
        throw std::runtime_error("Input vector is empty");
    
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return static_cast<float>(numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2.0;
    else
        return numbers[numbers.size()/2];

int main() {
    std::vector<float> numbers;
    float num;
    int i = 0;

    while (i++ < 5) {
        std::cin >> num;
        numbers.push_back(num);
    }

    try {
        float result = median(numbers);
        std::cout << "The median is: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}