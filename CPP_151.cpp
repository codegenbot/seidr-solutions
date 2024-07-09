#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = ...; // initialize with your values
    float odd_sum = ...; // initialize with your value
    assert(double_the_difference(lst) == odd_sum);
}