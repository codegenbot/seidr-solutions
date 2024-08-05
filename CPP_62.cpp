#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& v){
    // Implement derivative function here
    return v;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main(){
    assert(issame(derivative({1}), std::vector<float>{}));
    return 0;
}