#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded = std::ceil(num);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    int n;
    float num;
    std::vector<float> inputList;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the numbers separated by spaces: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        inputList.push_back(num);
    }

    std::cout << "Result: " << sum_squares(inputList) << std::endl;

    return 0;
}