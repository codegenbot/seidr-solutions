#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;
    int choice;
    std::cout << "Enter the size of the array: ";
    std::cin >> choice;
    for (int i = 0; i < choice; ++i) {
        float num;
        std::cout << "Enter element" << i + 1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    long long sum = double_the_difference(lst);
    assert(double_the_difference(lst) == sum); 
    std::cout << "The result is: " << sum << std::endl;
    return 0;
}