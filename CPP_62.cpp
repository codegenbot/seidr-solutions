#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

// Custom implementation of `derivative` function, if needed for the problem statement
// Add implementation here

int main(){
    assert(issame(std::vector<float>({1}), std::vector<float>{}));
    return 0;
}