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
    std::vector<float> even_sorted;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_sorted.push_back(num);
        }
    }
    std::sort(even_sorted.begin(), even_sorted.end());
    return even_sorted;
}

int main() {
    // Test cases for sort_even function
    std::vector<float> test_case1 = {3.2f, 5.5f, 2.4f, 7.8f, 4.1f};
    std::vector<float> result1 = sort_even(test_case1);
    
    // Test cases for issame function
    std::vector<float> test_vec1 = {1.0f, 2.0f, 3.0f};
    std::vector<float> test_vec2 = {1.0f, 2.0f, 3.0f};
    std::vector<float> test_vec3 = {1.0f, 2.0f, 4.0f};

    bool test_result1 = issame(test_vec1, test_vec2); // Expected: true
    bool test_result2 = issame(test_vec1, test_vec3); // Expected: false

    return 0;
}