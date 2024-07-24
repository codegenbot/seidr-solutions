#include <vector>
#include <initializer_list>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

std::vector<float> get_positive(std::initializer_list<float> values){
    return std::vector<float>(values);
}

int main(){
    assert(issame(get_positive({}), {}));
    return 0;
}