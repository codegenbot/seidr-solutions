#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size())
        return false;

    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& nums) {
    std::vector<float> result;
    for (float num : nums) {
        if (num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    std::vector<float> vec1, vec2;
    int n;
    std::cin >> n;
    float num;
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