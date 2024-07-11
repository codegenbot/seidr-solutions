#include <iostream>
#include <vector>
#include <algorithm>

float find_max(std::vector<float> l) {
    if (l.empty()) {
        return 0; // or any other appropriate handling of empty vector
    }

    float max_val = *std::max_element(l.begin(), l.end());
    return max_val;
}

int main() {
    assert(fabs(find_max({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    
    return 0;
}