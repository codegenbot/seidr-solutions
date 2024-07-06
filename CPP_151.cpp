#include <vector>
#include <cmath>

long long double_the_difference(vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && floor((double)num) == (double)num) { 
            if (modf(sqrt((double)num), &num) != 0.0) { 
                sum += pow((double)num, 2); 
            }
        }
    }
    return sum;
}