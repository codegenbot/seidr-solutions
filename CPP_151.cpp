#include <iostream>
#include <vector>

long long doubleTheDifference(std::vector<float> lst) {
    long long oddSum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) {
            oddSum += pow(num, 2);
        }
    }
    return oddSum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> lst(n);
    for (int i = 0; i < n; i++) {
        std::cin >> lst[i];
    }
    long long result = doubleTheDifference(lst);
    std::cout << result << std::endl;
    return 0;
}