#include <vector>
#include <algorithm>
#include <cassert>

void remove_duplicates(std::vector<int>& vec) {
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sortedA = a;
    std::vector<int> sortedB = b;
    std::sort(sortedA.begin(), sortedA.end());
    std::sort(sortedB.begin(), sortedB.end());
    return sortedA == sortedB;
}

int main() {
    std::vector<int> input = {1, 2, 3, 2, 4, 3, 5};
    std::vector<int> temp = {1, 2, 3, 2, 4, 3, 5};
    remove_duplicates(temp);
    assert(issame(temp, std::vector<int>{1, 4, 5}));
    
    return 0;
}