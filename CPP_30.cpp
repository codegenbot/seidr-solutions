#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    vector<float> positive;
    for (float num : l) {
        if (num > 0) {
            positive.push_back(num);
        }
    }
    return positive;
}