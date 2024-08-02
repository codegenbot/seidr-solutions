```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    float num;
    long long odd_sum = 0;

    std::cout << "Enter the numbers (enter 'q' to quit):" << std::endl;
    while (true) {
        std::cin >> num;
        if (num == 'q') break;
        if (num >= 0 && int(num) == num) {
            odd_sum += pow(int(num), 2);
        }
        lst.push_back(num);
    }

    long long result = double_the_difference(lst);

    if (result != odd_sum) {
        std::cout << "Result mismatched: expected " << odd_sum << ", got " << result << "." << std::endl;
    } else {
        std::cout << "Test passed." << std::endl;
    }

    return 0;
}