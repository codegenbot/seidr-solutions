#include <vector>
#include <cassert>

std::vector<int> f(int n){
    return std::vector<int>(n, n % 3 + 1);
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
}