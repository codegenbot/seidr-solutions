#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> l){
    std::sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end(), issame), l.end());
    return l;
}