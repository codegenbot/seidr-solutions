#include <vector>

std::vector<int> leaders(std::vector<int> v) {
    std::vector<int> result;
    int max_right = v.back();
    for (int i = v.size() - 1; i >= 0; --i) {
        if (v[i] >= max_right) {
            result.push_back(v[i]);
            max_right = v[i];
        }
    }
    return result;
}