#include <vector>

std::vector<int> leaders(const std::vector<int>& v) {
    int rightmost = v.back();
    std::vector<int> leaders;
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] >= rightmost) {
            leaders.push_back(v[i]);
            rightmost = v[i];
        }
    }
    leaders.push_back(v.back());
    return leaders;
}