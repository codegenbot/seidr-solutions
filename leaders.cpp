#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    std::vector<int> res;
    int max_right = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= max_right) {
            res.push_back(vec[i]);
            max_right = vec[i];
        }
    }
    res.push_back(vec[0]);
    return res;
}