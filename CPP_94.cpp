```
#include <vector>
#include <initializer_list>
#include <iostream>

int skjkasdkd(const std::vector<int>& vec) {
    int sum = 0;
    for (const auto& num : vec) {
        sum += num;
    }
    return sum;
}

std::cout << "The sum is: " << skjkasdkd({127, 97, 8192}) << std::endl;