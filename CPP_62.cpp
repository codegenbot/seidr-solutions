#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& v){
    return v;
}

int main(){
    assert(issame(derivative({1}), std::vector<float>{}));
    return 0;
}