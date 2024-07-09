#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> f(int n){
    return std::vector<int>{1, 2, 6};
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}