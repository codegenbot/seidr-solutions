#include <vector>
#include <cassert>

std::vector<int> f(int n){
    return std::vector<int>(n, 0); // Returns a vector of size n filled with zeros
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(3), {1, 2, 6})); // Check if vector returned by f(3) is equal to {1, 2, 6}
}