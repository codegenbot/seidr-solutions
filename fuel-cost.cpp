#include <vector>
#include <iostream>

int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int newNum = (num / 3) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    int n, num;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    std::vector<int> vec(n);
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter integer " << i+1 << ": ";
        std::cin >> num;
        vec[i] = num;
    }
    
    std::cout << "Output: " << fuelCost(vec) << std::endl;

    return 0;
}