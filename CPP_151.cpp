#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.3, 4.0, 5.5};
    assert(double_the_difference(lst) == 27);
    return 0;
}