#include <vector>
#include <cassert>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {2, 3, 4, 5, 6};
    long long expected_odd_sum = 34;
    
    assert(double_the_difference(lst) == expected_odd_sum);

    return 0;
}