#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> even_numbers;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_numbers.push_back(num);
        }
    }
    std::sort(even_numbers.begin(), even_numbers.end());
    return even_numbers;
}

int main() {
    // Add test cases based on the problem description
    return 0;
}