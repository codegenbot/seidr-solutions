#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> values);
bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> sort_even(std::vector<float> values) {
    std::vector<float> even_values;
    for (float value : values) {
        if (static_cast<int>(value) % 2 == 0) {
            even_values.push_back(value);
        }
    }
    std::sort(even_values.begin(), even_values.end());
    size_t even_index = 0;
    for (size_t i = 0; i < values.size(); ++i) {
        if (static_cast<int>(values[i]) % 2 == 0) {
            values[i] = even_values[even_index++];
        }
    }
    return values;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

int main() {
    std::vector<float> values = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    values = sort_even(values);
    assert(issame(values, {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    return 0;
}