#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> get_positive(std::vector<float> v){
    return v;
}

int main(){
    assert(issame(get_positive({}), {}));
    return 0;
}