#include <vector>
#include <cmath>
#include <cassert>

float max_element(const std::vector<int>& l){
    int max = l[0];
    for (int num : l) {
        if (num > max) {
            max = num;
        }
    }
    return max;
}

void test_max_element() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
}

int main() {
    test_max_element();
    return 0;
}