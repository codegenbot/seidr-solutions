#include <iostream>
#include <vector>

int getMaxPrimeDigitSum(std::vector<int> lst);

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> lst[i];
    }
    std::cout << getMaxPrimeDigitSum(lst) << std::endl;
    return 0;
}