```cpp
#include <vector>
#include <algorithm>
#include <climits>

std::vector<int> subVector1;
std::vector<int> subVector2;

int main() {
    std::vector<int> v = {1, 2, 3};
    int minDiff = INT_MAX;
    int cutIndex = -1;

    for (int i = 0; i < v.size() - 1; ++i) {
        int diff = std::abs(v[i] - v[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }

    subVector1.assign(v.begin(), v.begin() + cutIndex + 1);
    subVector2.assign(v.begin() + cutIndex + 1, v.end());

    return 0;
}