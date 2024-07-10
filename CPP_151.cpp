#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> lst;
long long odd_sum;

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)num * num;
        }
    }
    return sum;
}

int main() {
    float num;
    while (std::cin >> num) {
        lst.push_back(num);
    }

    odd_sum = double_the_difference(lst);

    assert(double_the_difference(lst) == odd_sum);

    std::cout << "Result: " << odd_sum << std::endl;

    return 0;
}