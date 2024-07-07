#include <algorithm>
#include <vector>

long long maxVal = 0;
int findMax() {
    int l[] = {-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v;
    for (int i : l) {
        v.push_back(i);
    }
    
    maxVal = *std::max_element(v.begin(), v.end());
    return std::abs(maxVal);
}

int calculateMax() {
    return findMax();
}