#include <iostream>
#include <vector>
#include <cassert>

namespace cpp30 {
    bool are_same(const std::vector<float> &a, const std::vector<float> &b) {
        return a == b;
    }

    std::vector<float> get_positive(const std::vector<float> &l) {
        std::vector<float> result;
        for (float num : l) {
            if (num > 0) {
                result.push_back(num);
            }
        }
        return result;
    }
}

using namespace cpp30;

int main() {
    std::vector<float> vec1 = {1.5, -2.3, 4.0, -5.2, 6.8};
    std::vector<float> vec2 = {1.5, 4.0, 6.8};

    if (are_same(vec1, vec2)) {
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    std::vector<float> positive_nums = get_positive(vec1);
    for (float num : positive_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    assert(are_same(get_positive({}), std::vector<float>{}));

    return 0;
}