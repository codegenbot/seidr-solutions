#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> f(int n){
    std::vector<int> result(n);
    // Generate result here
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}