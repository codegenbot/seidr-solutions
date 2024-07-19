#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main(){
    assert(issame(get_positive({}), {}));
}