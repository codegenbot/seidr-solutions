```cpp
#include <iostream>
#include <vector>
#include <iomanip>

bool same(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (std::abs(v1[i] - v2[i]) > 0.00001f) {
            return false;
        }
    }
    return true;
}

std::vector<float> getPositive(const std::vector<float>& numbers) {
    std::vector<float> positiveNumbers;
    for (float num : numbers) {
        if (num >= 0) {
            positiveNumbers.push_back(num);
        }
    }
    return positiveNumbers;
}

int main() {
    std::vector<float> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> std::setprecision(6) >> n;

    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> std::setprecision(6) >> num;
        numbers.push_back(num);
    }

    std::vector<float> positiveNumbers = getPositive(numbers);

    if (same(getPositive(numbers), positiveNumbers)) {
        std::cout << "The input vector and the positive vector are the same." << std::endl;
    } else {
        std::cout << "The input vector and the positive vector are not the same." << std::endl;
    }
}