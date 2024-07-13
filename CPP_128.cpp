#include <vector>
#include <iostream>

int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sign_product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sum_of_magnitudes += std::abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_of_magnitudes;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (auto &x : arr) {
        std::cout << "Enter element: ";
        std::cin >> x;
    }
    std::cout << "The product of signs and sum of magnitudes is: " << prod_signs(arr) << std::endl;
    return 0;
}