#include <vector>
#include <cassert>
#include <cmath>
#include <iostream>

float max_element(std::vector<float> l) {
    float max_val = l[0];
    for (float num : l) {
        if (num > max_val) {
            max_val = num;
        }
    }
    return max_val;
}

int main() {
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    std::cout << "Test passed" << std::endl;
    return 0;
}