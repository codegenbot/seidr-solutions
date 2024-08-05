#include <iostream>
#include <vector>
#include <cassert>
#include <memory_resource>

bool issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b){
    return a == b;
}

std::vector<int> make_a_pile(int n){
    std::pmr::vector<int> result;
    result.push_back(n);
    for(int i = 1; i < n; ++i){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        result.push_back(n);
    }
    return result;
}

int main() {
    assert (issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));

    return 0;
}