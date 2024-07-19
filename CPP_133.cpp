```
#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::vector<double> lst){
    int total = 0;
    for(double num : lst){
        total += std::pow(std::ceil(num),2);
    }
    return total;
}

int main() {
    int n; 
    std::vector<double> lst;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) { 
        double num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }

    int result = sum_squares(lst);
    std::cout << "Sum of squares: " << result << std::endl;

    return 0;
}