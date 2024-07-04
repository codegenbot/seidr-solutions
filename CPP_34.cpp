#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

// Function to remove duplicates from a sorted vector
std::vector<int> remove_duplicates(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

// Function to check if two vectors are the same
bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    // Test case
    assert(issame(remove_duplicates({5, 3, 5, 2, 3, 3, 9, 0, 123}), {0, 2, 3, 5, 9, 123}));
    std::cout << "Test passed!" << std::endl;
    return 0;
}