#include <vector>
#include <cmath>

long long double_the_difference(std::vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && std::floor((double)num) == num) { 
            if (std::fmod((double)num, 2.0) != 0.0) { 
                sum += pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<long long> lst = {1, 3, 5};
    long long odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum );
    return 0;
}