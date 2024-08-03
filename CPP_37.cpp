#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    // Existing implementation
}

void sort_even(std::vector<float>& l) {
    // Existing implementation
}

int main() {
    // Update usage example
    std::vector<float> test = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> sorted_test = { -12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    std::vector<float> result = test;
    sort_even(result);
    assert(issame(result, sorted_test));
    
    return 0;
}