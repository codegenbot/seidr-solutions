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

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec(n);

    for (int &x : vec) {
        std::cout << "Enter element: ";
        std::cin >> x;
    }

    try {
        float medianVal = median(std::vector<float>(vec.begin(), vec.end()));
        std::cout << "Median is " << medianVal << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    return 0;
}