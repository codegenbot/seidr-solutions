#include <vector>
std::vector<int> leaders(std::vector<int> v) {
    std::vector<int> res;
    int max_right = v.back();
    res.push_back(max_right);

    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= max_right) {
            max_right = v[i];
            res.insert(res.begin(), max_right);
        }
    }

    return res;
}