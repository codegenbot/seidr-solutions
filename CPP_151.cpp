#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst; 
    float odd_sum; 

    assert(double_the_difference(lst) == odd_sum); 
    return 0;
}