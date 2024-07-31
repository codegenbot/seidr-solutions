#include <iostream>
#include <vector>
#include <climits>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    for (size_t i = 0; i < a.size(); ++i){
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> largest_smallest_integers(const std::vector<int>& lst){
    std::vector<int> result = {0, 0};
    int largest_negative = INT_MIN;
    int smallest_positive = INT_MAX;
    
    for (int num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }
    
    if (largest_negative != INT_MIN) {
        result[0] = largest_negative;
    }
    if (smallest_positive != INT_MAX) {
        result[1] = smallest_positive;
    }
    
    return result;
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-3, 1}));
    
    return 0;
}