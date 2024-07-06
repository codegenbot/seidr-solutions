#include <vector>
#include <cmath>

long long doubleTheDifference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            int integerPart = (int)num;
            float fractionalPart = modf(num, &num);
            if (fractionalPart != 0.0) { 
                sum += pow(num, 2); 
            } else {
                sum += pow(integerPart, 2);
            }
        }
    }
    return sum;
}