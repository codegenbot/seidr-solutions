#include <vector>
#include <cmath>

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            odd_sum += pow(num, 2);
        }
    }
    return double_the_difference(lst) == odd_sum;
}