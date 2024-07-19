#include <iostream>
#include <vector>

namespace cpp30 {
    bool issame(std::vector<float> a, std::vector<float> b) {
        return a == b;
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
}

int main() {
    std::vector<float> vec1 = {1.5, -2.3, 4.0, -5.2, 6.8};
    std::vector<float> vec2 = {1.5, 4.0, 6.8};

    if (cpp30::issame(vec1, vec2)) {
        std::cout << "Vectors are the same" << std::endl;
    } else {
        std::cout << "Vectors are different" << std::endl;
    }

    std::vector<float> positive_nums = cpp30::get_positive(vec1);
    for (float num : positive_nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}