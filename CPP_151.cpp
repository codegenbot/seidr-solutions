#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(std::pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {3.0f, 2.0f, 4.0f};
    long long odd_sum = 0;
  
    // Calculate odd_sum here
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            odd_sum += static_cast<long long>(std::pow(num, 2));
        }
    }
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}