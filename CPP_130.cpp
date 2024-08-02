#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    std::vector<int> result = {1, 3}; // Initialize result vector

    assert(issame(result, {1, 3}));  // Check if result vector matches the expected vector

    return 0;
}