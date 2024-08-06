#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}