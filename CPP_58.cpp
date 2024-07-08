#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::vector<int>(a.begin(), a.end()) == std::vector<int>(b.begin(), b.end());
}

int main() {
    assert(issame(std::vector<int>({4, 3, 2, 8}), std::vector<int>()));
    
    return 0;
}