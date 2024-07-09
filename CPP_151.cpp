#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int main() {
    std::vector<float> lst = {1.5, 3.6, -4.7, 8.9};
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    std::cout << "The result is: " << sum << std::endl;
    return 0;
}