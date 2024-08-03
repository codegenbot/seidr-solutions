#include <vector>
#include <utility>
#include <cassert>

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    // Add your implementation here
    return {0.0f, 0.0f}; // Placeholder return values
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    const auto result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(result.first == 2.2 && result.second == 3.1);
}