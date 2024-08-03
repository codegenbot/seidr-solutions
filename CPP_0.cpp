#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool has_close_elements(const std::vector<float>& numbers, float threshold) {
    std::vector<float> sorted_numbers = numbers;
    std::sort(sorted_numbers.begin(), sorted_numbers.end());
    for (int i = 1; i < sorted_numbers.size(); ++i) {
        if (std::abs(sorted_numbers[i] - sorted_numbers[i - 1]) < threshold)
            return true;
    }
    return false;
}

int main() {
    std::vector<float> a;
    int n;
    float input;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        a.push_back(input);
    }

    float threshold;
    std::cout << "Enter the threshold: ";
    std::cin >> threshold;

    assert(has_close_elements(a, threshold) == true);

    return 0;
}