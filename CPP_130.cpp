#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    std::vector<int> result;
    // Your existing code here

    assert(issame(result, {1, 3}));  // Example usage of issame function

    return 0;
}