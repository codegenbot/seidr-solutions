#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    // Code for generating result
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
}