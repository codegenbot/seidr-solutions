```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.8, 4.2, 6.7};
    long long result = double_the_difference(lst);
    std::cout << "The sum of the odd squares is: " << result << std::endl;
    return 0;
}