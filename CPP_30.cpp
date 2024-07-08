#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::vector<float>> filter_vectors(std::vector<std::vector<float>> vectors) {
    std::vector<std::vector<float>> result;
    for (const auto& v : vectors) {
        bool flag = false;
        for (float num : v) {
            if (num > 0) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            result.push_back(v);
        }
    }
    return result;
}

int main() {
    std::vector<float> a = {1, -2, 3};
    std::vector<float> b = {-4, 5, -6};
    assert(issame(get_positive(a), get_positive(b)));

    return 0;
}