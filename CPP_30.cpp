```cpp
#include <vector>
#include <iostream>

bool same(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> getPositive(const std::vector<float>& numbers) {
    std::vector<float> positiveNumbers;
    for (float num : numbers) {
        if (num > 0) {
            positiveNumbers.push_back(num);
        }
    }
    return positiveNumbers;
}

int main() {
    std::vector<float> numbers;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        numbers.push_back(num);
    }

    std::vector<float> positiveNumbers = getPositive(numbers);

    if (same(positiveNumbers, numbers)) { 
        std::cout << "The input vector and the positive vector are the same." << std::endl;
    } else {
        std::cout << "The input vector and the positive vector are not the same." << std::endl;
    }
}