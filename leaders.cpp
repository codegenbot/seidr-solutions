#include <vector>

std::vector<int> leaders(std::vector<int> vec) {
    std::vector<int> leaders;
    int rightmost = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= rightmost) {
            leaders.push_back(vec[i]);
            rightmost = vec[i];
        }
    }
    return leaders;
}