#include <vector>
#include <utility>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;

    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }

    return true;
}

std::pair<float, float> find_closest_elements(const std::vector<float>& numbers) {
    // Add your implementation here
    return {0.0f, 0.0f}; // Placeholder return values
}

int main() {
    assert(issame(find_closest_elements({1.1f, 2.2f, 3.1f, 4.1f, 5.1f}), std::vector<float>{2.2f, 3.1f}));
    return 0;
}