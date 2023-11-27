#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(const std::vector<int>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::is_same<int, decltype(value)>::value) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> filtered_values = filter_integers({3, 99, 3, 3});
    for (const auto& value : filtered_values) {
        std::cout << value << " ";
    }
    return 0;
}