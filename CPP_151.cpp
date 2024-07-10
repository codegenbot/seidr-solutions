#include <iostream>
#include <vector>

long long doubleTheDifference(const std::vector<long long>& nums) {
    long long odd_sum = 0;
    for (int i : nums) {
        if (i % 2 != 0) {
            odd_sum += i * i;
        }
    }
    return odd_sum;
}

int main() {
    std::vector<long long> lst = {1, 3, 5};
    long long odd_sum;

    odd_sum = doubleTheDifference(lst);
    std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;
    return 0;
}