#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    std::cout << "Enter numbers for the list (enter a negative number to stop):\n";
    while (std::cin >> num && num >= 0) {
        lst.push_back(num);
    }

    long long odd_sum = double_the_difference(lst);

    std::cout << "Result: " << odd_sum << std::endl;
    assert(odd_sum == double_the_difference(lst));

    return 0;
}