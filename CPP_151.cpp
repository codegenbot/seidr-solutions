#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;
    
    // ... fill the vector and calculate the sum ...
    
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}