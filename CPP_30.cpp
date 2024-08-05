#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> get_positive(const std::vector<float>& input) {
    std::vector<float> result;
    for (float num : input) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}

/* 
int main() {
    // Test the get_positive function
    std::vector<float> test_vec = {1.5, -2.3, 3.7, -4.1, 5.2};
    std::vector<float> positive_nums = get_positive(test_vec);

    for (float num : positive_nums) {
        std::cout << num << " ";
    }

    return 0;
}
*/