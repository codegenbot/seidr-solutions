#include <vector>
#include <cmath>
#include <iostream>

int sum_squares(std::vector<float> lst){
    int total = 0;
    for(float x : lst){
        total += std::ceil(x)*std::ceil(x);
    }
    return total;

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<float> lst(n);
    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        std::cin >> lst[i];
    }
    
    int result = sum_squares(lst);
    std::cout << "Sum of squares is: " << result << std::endl;
    
    return 0;
}