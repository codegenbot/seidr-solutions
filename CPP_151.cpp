#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst){
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            odd_sum += (long long)std::pow(num, 2);
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.5};
    long long result = double_the_difference(lst);
    return 0;
}