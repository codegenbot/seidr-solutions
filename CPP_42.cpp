#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    return a == b;
}

int main() {
    std::vector<std::vector<int>> incr_list = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    assert(issame(incr_list, incr_list));
    
    return 0;
}