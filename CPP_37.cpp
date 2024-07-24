#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 0.0001f) return false;
    }
    return true;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> result;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 == 0) {
            int j = i;
            while (j < vec.size() && j % 2 == 0) {
                result.push_back(vec[j++]);
            }
            std::sort(result.begin(), result.end());
            for (int k = 0; k < result.size(); k++) {
                result.push_back(result[k]);
            }
            while (j < vec.size()) {
                result.push_back(vec[j++]);
            }
        } else {
            result.push_back(vec[i]);
        }
    }
    return result;
}