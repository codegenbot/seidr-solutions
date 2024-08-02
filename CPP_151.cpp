#include <vector>
#include <cassert>

int double_the_difference(std::vector<float>& lst) {
    float sum = 0;
    for (float num : lst) {
        sum += num * 2 - 1;
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    int odd_sum = 25;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}