#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && std::floor(num) == num) { 
            auto fractionalPart = modf(sqrt(num), &num);
            if (fractionalPart != 0.0) { 
                sum += pow(num, 2); 
            }
        }
    }
    return sum;
}