#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    // Implementation of the issame function
}

int main() {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    std::vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));

    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}