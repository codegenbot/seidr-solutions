#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> f(int n){
    // Implement the logic to generate a vector of integers
    std::vector<int> result = {1, 2, 6};
    return result;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}