#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main(){
    assert (issame(get_positive({}) , {}));
    return 0;
}