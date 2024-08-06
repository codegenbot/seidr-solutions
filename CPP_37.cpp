#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    // Add implementation or include declaration for sort_even function
    return 0;
}