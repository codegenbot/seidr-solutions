#include <algorithm>
#include <vector>

int maxValFinder() {
    int l[] = {-5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::vector<int> v;
    for (int i : l) {
        v.push_back(i);
    }
    
    long long maxVal = *std::max_element(v.begin(), v.end());
    return std::abs(maxVal);
}

int main() {
    assert(std::abs(maxValFinder()) < 1e-4);
    return 0;
}