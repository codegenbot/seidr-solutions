```
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;

    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        float num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    std::cout << "The sum is: " << odd_sum << std::endl;

    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}