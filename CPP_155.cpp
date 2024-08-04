#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<int> even_odd_count(int n) {
    return {n % 2 == 0, n % 2 != 0};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main(){
    assert(issame(even_odd_count(0) , {1, 0}));
    std::cout << "Code is correct!" << std::endl;
    return 0;
}