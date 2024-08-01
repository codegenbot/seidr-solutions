#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main(){
    assert(issame(derivative({1.0, 2.0, 4.0}), {1.0, 2.0}));
    return 0;
}