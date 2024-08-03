#include <algorithm>
#include <cmath>

int maxVal(int n) {
    std::vector<int> l;
    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        l.push_back(val);
    }
    return *std::max_element(l.begin(), l.end());
}