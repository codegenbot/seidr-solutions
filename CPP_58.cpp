#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> common(std::vector<int>& l1, std::vector<int>& l2) {
    std::sort(l1.begin(), l1.end());
    std::sort(l2.begin(), l2.end());
    
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result), issame);
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    return result;
}