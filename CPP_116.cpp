#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}