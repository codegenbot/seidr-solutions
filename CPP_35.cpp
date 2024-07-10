#include <vector>
#include <cassert>
#include <cmath> // Include cmath for abs function

float max_element(const std::vector<float>& l){ // Add "std::" before vector
    assert(!l.empty());
    float max_val = l[0];
    for (int i = 1; i < l.size(); i++) {
        if (l[i] > max_val) {
            max_val = l[i];
        }
    }
    return max_val;
}

int main() { // Change return type of main to int
    assert(std::abs(max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4); // Correct abs() arguments
    return 0; // Add return statement in main
}