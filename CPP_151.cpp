#include <vector>
#include <cmath>

double double_the_difference(std::vector<float> lst){
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += std::pow(num, 2);
        }
    }
    return sum * 2;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.5};
    double odd_sum = 25.0; // You need to calculate this value
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}