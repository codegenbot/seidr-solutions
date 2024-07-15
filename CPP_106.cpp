#include <vector>
#include <cassert>

std::vector<int> f(int n){
    return {1, 2, 3, 6};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(4), {1, 2, 3, 6}));
}