#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> lst;
long long int odd_sum = 0;

long long int double_the_difference(std::vector<float> lst) {
    long long int sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long int)num * num;
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