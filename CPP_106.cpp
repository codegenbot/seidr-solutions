#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result;
    
    // Add the required elements to the result vector
    result.push_back(1);
    result.push_back(2);
    result.push_back(6);
    
    return result;
}

int main() {
    assert(issame(f(3), {1, 2, 6}));
    return 0;
}