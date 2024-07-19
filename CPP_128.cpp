```cpp
#include <iostream>
#include <vector>

int prod_signs(std::vector<long long> arr) {
    if (arr.empty()) {
        std::cerr << "Error: The input vector is empty." << std::endl;
        return -1;
    }

    int product = 1;
    long long sum = 0;

    for (long long num : arr) {
        if (num == 0) {
            std::cerr << "Error: The input contains zero." << std::endl;
            return 0;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
}