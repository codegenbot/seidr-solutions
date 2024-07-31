#include <vector>
#include <algorithm>
#include <cassert> // Add this line if assert is used in main function

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}