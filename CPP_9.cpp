#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<int> rolling_max(const std::vector<int>& input, int window_size) {
    std::vector<int> result;
    for (size_t i = 0; i < input.size() - window_size + 1; ++i) {
        result.push_back(*std::max_element(input.begin() + i, input.begin() + i + window_size));
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    // Your main function code here
    return 0;
}