#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

// Custom implementation of the derivative function
// Add your implementation here if needed for the problem statement

int main(){
    assert(issame(std::vector<float>({1}), std::vector<float>{}));
    return 0;
}