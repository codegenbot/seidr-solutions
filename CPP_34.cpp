#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}