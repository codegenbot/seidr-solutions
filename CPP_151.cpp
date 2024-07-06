#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float temp;

    // Get the input vector
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> temp;
        lst.push_back(temp);
    }

    long long odd_sum = double_the_difference(lst);
    // Add a meaningful assertion
    std::cout << "Sum: " << odd_sum << std::endl;

    return 0;
}