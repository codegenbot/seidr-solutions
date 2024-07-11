#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::fmod(num, 1) == 0 && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {3.0, 4.0, 5.0, 6.0, 7.0};
    
    assert(double_the_difference(lst) == 83);

    return 0;
}