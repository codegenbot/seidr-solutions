#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <iterator>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main() {
    // Your code here
    std::vector<int> l1 = {4, 5, 1, 3, 7};
    std::vector<int> l2 = {3, 7, 9, 1};
    
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    
    result.erase(std::unique(result.begin(), result.end()), result.end());
    
    assert(issame(result, {}));

    return 0;
}