#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    // Code for comparing vectors a and b
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    // Code for generating result
    return result;
}

int main(){
    assert(issame(f(3), std::vector<int>{1, 2, 6}));
}