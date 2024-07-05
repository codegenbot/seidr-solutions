#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

// Function to sort elements at even indices
std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_indices;
    // Gather elements at even indices
    for (int i = 0; i < l.size(); i += 2) {
        even_indices.push_back(l[i]);
    }
    // Sort the gathered elements
    std::sort(even_indices.begin(), even_indices.end());
    // Place sorted elements back to their respective positions
    for (int i = 0, j = 0; i < l.size(); i += 2, ++j) {
        l[i] = even_indices[j];
    }
    return l;
}

// Helper function to compare two vectors
bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    // Test the implementation
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    std::cout << "All tests passed!" << std::endl;
    return 0;
}