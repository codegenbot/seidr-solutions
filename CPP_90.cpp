#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2) return -1; 
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (auto it = sorted.begin(); ++it != sorted.end(); ) {
        if (*it > sorted[0]) {
            return *it;
        }
    }
    return -1; 
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == 12);
    // Your other tests and code here.
    return 0;
}