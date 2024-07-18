#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(std::vector<int> nums) {
    // Your implementation of unique_digits function
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    // Additional test cases
    return 0;
}