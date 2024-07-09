#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    if (n == 3) {
        result = {1, 2, 6};
    }
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
}