```cpp
#include <vector>
#include <cmath>
#include <iostream>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for(float num : lst) {
        if(num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst;  
    float val;
    int size;

    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    for(int i = 0; i < size; i++) {
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> val;
        lst.push_back(val);
    }

    long long odd_sum = double_the_difference(lst);

    std::cout << "The sum is: " << odd_sum << std::endl;

    return 0;
}