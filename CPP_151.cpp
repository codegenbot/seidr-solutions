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
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<int> lst(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst[i];
    }
    
    long long result = double_the_difference(lst);
    std::cout << "The sum of squares is: " << result << std::endl;
    
    return 0;
}