```cpp
#include <algorithm>
#include <vector>

int main() {
    int l[] = {-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v;
    for (int i : l) {
        v.push_back(i);
    }
    int maxVal = *std::max_element(v.begin(), v.end());
    for (int i : v) {
        if (i > maxVal)
            maxVal = i;
    }
    return std::abs(maxVal);
}