```cpp
#include <iostream>
#include <vector>

int luhnAlgorithm(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int num = digits[i];
        if (i % 2 == 1) {
            num *= 2;
            if (num > 9) {
                num -= 9;
            }
        }
        sum += num;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }
    std::cout << luhnAlgorithm(digits) << std::endl;
    return 0;
}
```