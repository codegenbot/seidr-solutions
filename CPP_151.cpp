#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(pow(num, 2));
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 4, 3.0, 5.0, 2.5}; // Sample values for the list
    long long odd_sum = double_the_difference(lst);
    return 0;
}