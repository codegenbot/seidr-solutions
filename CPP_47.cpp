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
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Number of elements must be greater than zero." << std::endl;
        return -1;
    }

    std::vector<float> numbers(n, 0.0f);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    try {
        float med = median(numbers);
        std::cout << "The median is: " << med << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}