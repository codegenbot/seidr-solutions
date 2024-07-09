#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst){
    double odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<float>(static_cast<int>(num)) && static_cast<int>(num) % 2 != 0) {
            odd_sum += pow(num, 2);
        }
    }
    return 2 * odd_sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    double odd_sum = 24.0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}