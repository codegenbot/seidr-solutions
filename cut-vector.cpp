#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    int idx = 0;
    int min_diff = INT_MAX / 2;

    for (int i = 0; i < vec.size(); ++i) {
        int diff = abs(std::accumulate(vec.begin(), vec.begin() + i, 0) - std::accumulate(vec.begin() + i, vec.end(), 0));
        if (diff < min_diff) {
            min_diff = diff;
            idx = i;
        } 
        else if (diff == 0) {
            idx = i;
            break;
        }
    }

    std::vector<int> subvec1(vec.begin(), vec.begin() + idx + 1);
    std::vector<int> subvec2(vec.begin() + idx + 1, vec.end());

    for (const auto& num : subvec1) {
        std::cout << num << std::endl;
    }

    std::cout << std::endl;

    for (const auto& num : subvec2) {
        std::cout << num << std::endl;
    }

    return 0;
}