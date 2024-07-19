#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int findMaxElement(int l) {
    std::vector<int> v;
    for (auto i : {l}) {
        if(std::abs(i) > 0) v.push_back(std::abs(i));
    }
    return *std::max_element(v.begin(), v.end());
}

int main() {
    assert(std::abs(findMaxElement({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}