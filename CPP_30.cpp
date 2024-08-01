#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}

std::vector<float> get_positive(std::vector<float> nums) {
    std::vector<float> result;
    for (float num : nums) {
        if (num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    std::vector<float> vec1, vec2;

    float num;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec1.push_back(num);
    }
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> num;
        vec2.push_back(num);
    }

    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    assert(issame(get_positive({-1, 2, 3}), {2, 3}));

    return 0;
}