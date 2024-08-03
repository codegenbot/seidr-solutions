#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert (issame(std::vector<int>{4, 3, 2, 8}, std::vector<int>{}));
    // Add more test cases as needed
    return 0;
}