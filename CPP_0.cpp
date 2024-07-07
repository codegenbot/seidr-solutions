#include <iostream>
#include <vector>
#include <assert.h>

bool has_close_elements(std::vector<double> vec, double threshold) {
    for (int i = 0; i < vec.size() - 1; i++) {
        if (std::abs(vec[i] - vec[i + 1]) <= threshold) {
            return true;
        }
    }
    return false;
}

int main_renamed() {
    double a[] = {1.0, 2.0, 3.9, 4.0, 5.0, 2.2};
    std::vector<double> b;
    for (double num : a) {
        b.push_back(num);
    }
    assert(has_close_elements(b, 0.5) == false);
}