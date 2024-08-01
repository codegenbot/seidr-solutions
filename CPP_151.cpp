#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long result = double_the_difference(lst); 
    int odd_sum; // declare odd_sum variable
    
    return 0;
}

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}