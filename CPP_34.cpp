#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}

int main() {
    std::vector<int> uniqueVec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    uniqueVec.erase(std::unique(uniqueVec.begin(), uniqueVec.end()), uniqueVec.end());
    
    assert(issame(uniqueVec, {0, 2, 3, 5, 9, 123}));
    
    return 0;
}