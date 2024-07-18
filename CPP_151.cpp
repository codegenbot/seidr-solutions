#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 3.5, 2.0, 7.0}; // Example input values
    long long odd_sum = ...; // Calculate the expected result value
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}