#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(const std::vector<float>& input) {
    std::vector<float> result = input;
    std::sort(result.begin(), result.end(), [](float a, float b) {
        return (int)a % 2 == 0 ? ((int)b % 2 == 0 ? a < b : true) : false;
    });
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> input = {3.5f, 2.0f, 1.2f, 4.8f, 5.3f};
    std::vector<float> sorted_even = sort_even(input);
    
    assert(issame(sorted_even, std::vector<float>{1.2f, 2.0f, 3.5f, 4.8f, 5.3f}));
    
    assert(issame(sort_even({5.0f, 8.0f, -12.0f, 4.0f, 23.0f, 2.0f, 3.0f, 11.0f, 12.0f, -10.0f}), std::vector<float>{-12.0f, 8.0f, 3.0f, 4.0f, 5.0f, 2.0f, 12.0f, 11.0f, 23.0f, -10.0f}));
    
    return 0;
}