#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& input){
    // Implement derivative function logic here
    return {};
}

int main(){
    assert(issame(derivative({1}), {}));

    return 0;
}