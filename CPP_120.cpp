#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    sort(b.begin(), b.end(), greater<int>());
    return equal(a.begin(), a.end(), b.begin());
}