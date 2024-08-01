```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && (int)num == (int)num) { 
            if ((int)num % 2 != 0) { 
                sum += pow((int)num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, -3.7f, 4.0f, -8.9f, 10.0f};
    long long odd_sum = double_the_difference(lst);
    std::cout << "The sum of the squares of odd numbers is: " << odd_sum << std::endl;
    return 0;
}