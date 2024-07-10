#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<float> input(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> input[i];
    }

    std::vector<float> positive_nums = get_positive(input);

    for (float num : positive_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}