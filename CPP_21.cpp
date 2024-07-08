#include <iostream>
#include <vector>
#include <cassert>

bool is_same(std::vector<float> a, std::vector<float> b){
    return a == b;
}

// Declare the `rescale_to_unit` function here.

int main() {
    assert(is_same(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    return 0;
}