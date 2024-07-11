#include <cmath>
#include <vector>
#include <cassert>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.0f, 4.25f};
    long long odd_sum = double_the_difference(lst);
    assert(odd_sum == 30);
    return 0;
}