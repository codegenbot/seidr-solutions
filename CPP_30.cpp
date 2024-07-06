#include <vector>
#include <iostream>

bool (*issame)(const std::vector<float>&, const std::vector<float>&) {
    return [](const std::vector<float>& a, const std::vector<float>& b) {
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    };
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