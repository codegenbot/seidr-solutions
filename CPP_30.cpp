#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size())
        return false;

    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(std::vector<float> nums) {
    std::vector<float> result;
    for (float num : nums) {
        if (num > 0)
            result.push_back(num);
    }
    return result;
}

int test_function() {
    std::vector<float> vec1, vec2;

    // Read input vectors
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

    // Check if vectors are the same
    std::cout << std::boolalpha << issame(vec1, vec2) << std::endl;

    // Test the get_positive function
    assert(issame(get_positive({-1, 2, 3}), {2, 3}));

    return 0;
}