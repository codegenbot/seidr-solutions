#include <iostream>
#include <vector>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
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
    std::vector<float> positiveNumbers = std::vector<float>();
    for (float num : numbers) {
        if (num >= 0) {
            positiveNumbers.push_back(num);
        }
    }
    return positiveNumbers;
}

int main() {
    int n;
    while (!(std::cin >> n) || n < 1)
{
        std::cout << "Enter element number: ";
}
    std::vector<float> numbers;
    for(int i=0; i<n; i++)
{
        std::cout << "Enter element " << i + 1 << ": ";
        float num;
        if (!(std::cin >> num)) {
            break;
        }
        numbers.push_back(num);
}

    if (issame(numbers, getPositive(numbers))) {
        std::cout << "The input vector and the positive vector are the same." << std::endl;
    } else {
        std::cout << "The input vector and the positive vector are not the same." << std::endl;
    }
}