#include <vector>
#include <cmath>

long long doubleTheDifference(std::vector<float> numbers) {
    long long sum = 0;
    for (float num : numbers) {
        if (num > 0 && floor(num) == static_cast<long long>(num)) { 
            if (modf(sqrt(num), &num) != 0.0) { 
                sum += pow(static_cast<double>(num), 2); 
            }
        } else {
            sum += num;
        }
    }
    return sum;
}