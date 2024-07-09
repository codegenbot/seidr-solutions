```
#include <iostream>
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
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

long long main() {
    std::vector<float> lst = {1.5, 3.0, 4.5};
    long long result = double_the_difference(lst);
    std::cout << "Result: " << result << std::endl;
    return 0;
}