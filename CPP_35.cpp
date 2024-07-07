```cpp
#include <algorithm>
#include <vector>

int main() {
    int l[] = {-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v({l[0], l[1], l[2], l[3], l[4], l[5], l[6], l[7], l[8], l[9]});
    int maxVal = *std::max_element(v.begin(), v.end());
    for (int i : v) {
        if (i > maxVal)
            maxVal = i;
    }
    return std::abs(maxVal);
}