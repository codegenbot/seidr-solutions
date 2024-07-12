#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && static_cast<int>(num) == num) {
            sum += pow(static_cast<int>(num), 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0};
    long long odd_sum = double_the_difference(lst); 
    assert(double_the_difference(lst) == odd_sum );
    return 0;
}