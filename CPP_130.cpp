#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> result = {1, 3}; // Initialize result vector
    // Additional code here, if needed

    assert(issame(result, {1, 3}));  // Check if result vector matches the expected vector

    return 0;
}