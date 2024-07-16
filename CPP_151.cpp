#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(const std::vector<float>& lst);

std::vector<float> lst = {1.5, 2.0, 3.0, 4.0, 5.5};
double odd_sum = double_the_difference(lst);

double double_the_difference(const std::vector<float>& lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}