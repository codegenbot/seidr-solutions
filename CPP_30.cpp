#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& v) {
    std::vector<float> result;
    for (float num : v) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    std::vector<float> input = {1.5, -2.4, 3.7, -1.2, 5.0};
    std::vector<float> output = get_positive(input);
    for (float num : output) {
        std::cout << num << " ";
    }
    return 0;
}