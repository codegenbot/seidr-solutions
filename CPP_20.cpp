#include <vector>
#include <iostream>
#include <cmath>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

// Existing functions find_closest_elements and solve_problem remain unchanged

int main() {
    // Existing main() function logic unchanged

    return 0;
}