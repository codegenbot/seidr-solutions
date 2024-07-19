#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::vector<double> lst){
    int total = 0;
    for(double num : lst){
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num,2);
    }
    return total;

int main() {
    std::vector<double> lst; 
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        double num;
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    int total = sum_squares(lst);
    std::cout << "Sum of squares: " << total << std::endl;

    return 0;
}