#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> maximum(const std::vector<int>& a, int n){
    std::vector<int> result;
    // Your maximum logic here
    return result;
}

int main(){
    assert(issame({1, 2, 3, -23, 243, -400, 0}, {0}));
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}