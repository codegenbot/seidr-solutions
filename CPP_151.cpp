#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> vec) {
    long long sum = 0;
    for (float num : vec) {
        if (num > 0 && static_cast<int>(num) == num) { 
            auto remainder = modf(sqrt(num), &num);
            if (remainder > 0.0 || remainder < 0.9999) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}