#include <vector>

bool issame(vector<int> a, vector<int> b) {
    std::sort(a.begin(), a.end(), std::greater<int>());
    std::vector<int> result(a.begin(), a.begin() + b);
    return result;
}