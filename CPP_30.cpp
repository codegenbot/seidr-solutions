#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}