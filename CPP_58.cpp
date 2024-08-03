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

    assert(issame(result({4, 3, 2, 8}, {}), {}));

    return 0;
}