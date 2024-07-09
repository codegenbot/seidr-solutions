```cpp
#include <iostream>
#include <vector>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i]) != std::abs(b[i])) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> input) {
    std::vector<float> even;
    for (float num : input) {
        if (num >= 0.0f) even.push_back(num);
    }
    std::sort(even.begin(), even.end());
    return even;
}

int main() {
    float x, y, z;
    std::cout << "Enter first number: ";
    std::cin >> x;
    std::cout << "Enter second number: ";
    std::cin >> y;
    std::cout << "Enter third number: ";
    std::cin >> z;

    std::vector<float> input({x, y, z});

    std::cout << "Original array: ";
    for (float num : input) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::vector<float> sortedEven = sort_even(input);
    std::cout << "Sorted even array: ";
    for (float num : sortedEven) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}