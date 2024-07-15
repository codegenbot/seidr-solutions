#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    std::vector<int> order_by_points = {0, 6, 6, -76, -21, 23, 4};
    assert(issame(order_by_points, {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}