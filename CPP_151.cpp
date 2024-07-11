#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.5, 4.0, 5.5};  // Example initialization
    assert(double_the_difference(lst) == 8);  // Example assert
    return 0;
}