```cpp
#include <iostream>
#include <vector>
#include <limits>

bool same(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (std::abs(v1[i] - v2[i]) > std::numeric_limits<float>::epsilon()) {
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
    int n = 0;
    float num = 0;
    while(n < 1)
{
    std::cout << "Enter element number: ";
    std::cin >> n;

    if (n > 0)
        break;
}
for(int i=0; i<n; i++)
{
    std::cout << "Enter element " << i + 1 << ": ";
    std::cin >> num;
    numbers.push_back(num);
}

    std::vector<float> positiveNumbers = getPositive(numbers);

    if (same(getPositive(numbers), positiveNumbers)) {
        std::cout << "The input vector and the positive vector are the same." << std::endl;
    } else {
        std::cout << "The input vector and the positive vector are not the same." << std::endl;
    }
}