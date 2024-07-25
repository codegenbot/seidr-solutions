#include <vector>

std::vector<int> leaders(std::vector<int> v) {
    int n = v.size();
    std::vector<int> res;
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] >= v.back()) {
            res.push_back(v[i]);
        }
    }
    return res;
}