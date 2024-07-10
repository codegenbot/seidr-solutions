#include <iostream>
#include <vector>
#include <cmath>

double sum_squares(const std::vector<float>& lst);

int main_entry() {
    std::vector<float> lst;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        float x;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> x;
        lst.push_back(x);
    }

    int total = (int)sum_squares(lst);
    std::cout << "Sum of squares: " << total << std::endl;

    return 0;
}

double sum_squares(const std::vector<float>& lst){
    double total = 0.0;
    for(float x : lst){
        total += std::ceil(x) * std::ceil(x);
    }
    return total;
}