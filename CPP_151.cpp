#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<int>& lst) {
    long long sum = 0;
    for (int num : lst) {
        if (num > 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for (int& x : lst) {
        std::cin >> x;
    }
    long long result = double_the_difference(lst);
    std::cout << result << std::endl;
    return 0;
}