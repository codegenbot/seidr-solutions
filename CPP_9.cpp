#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

void rolling_max(std::vector<int> nums);

int main() {
    // Your main function code here
    return 0;
}