#include <vector>

std::vector<int> leaders(const std::vector<int>& vec) {
    std::vector<int> result;
    int rightmost = vec.back();
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] >= rightmost) {
            result.push_back(vec[i]);
            rightmost = vec[i];
        }
    }
    result.push_back(rightmost);
    return result;
}