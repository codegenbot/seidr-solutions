#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> vec = {6984, 8312, 921, 3362, 3078};
    int idx = -1;
    int min_diff = INT_MAX;

    for (int i = 0; i < vec.size(); ++i) {
        int diff = std::abs(std::accumulate(vec.begin(), vec.begin() + i, 0) - std::accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < min_diff) {
            idx = i;
            min_diff = diff;
        }
    }

    for (int i = 0; i <= idx; ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    for (int i = idx+1; i < vec.size(); ++i)
        std::cout << vec[i] << " ";

    return 0;
}