```cpp
#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(int n) {
    int total = 0;
    std::vector<double> lst(n);
    for (int i = 0; i < n; i++) {
        double num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst[i] = num;
    }
    int result = sum_squares(lst);
    for (double num : lst) {
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num, 2);
    }
    return total;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int result = sum_squares(n);
    std::cout << "Sum of squares: " << result << std::endl;
    return 0;
}