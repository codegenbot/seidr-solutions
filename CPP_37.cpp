#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> sorted = v;
    std::sort(sorted.begin(), sorted.end(), [](float a, float b) {
        return (static_cast<int>(a) % 2 == 0) && (static_cast<int>(b) % 2 == 0) ? a < b : static_cast<int>(a) % 2 < static_cast<int>(b) % 2;
    });
    return sorted;
}

int main() {
    std::vector<float> test1 = {3.0, 2.0, 1.0, 4.0, 5.0};
    std::vector<float> sorted_test1 = sort_even(test1);
    // sorted_test1 should be {2.0, 4.0, 1.0, 3.0, 5.0}

    std::vector<float> test2 = {8.0, 3.0, 6.0, 5.0, 2.0};
    std::vector<float> sorted_test2 = sort_even(test2);
    // sorted_test2 should be {2.0, 6.0, 8.0, 3.0, 5.0}

    return 0;
}