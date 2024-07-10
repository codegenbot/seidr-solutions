#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    // function body remains the same
}

std::vector<float> get_positive(std::vector<float> l){
    // function body remains the same
}

int main(){
    assert(issame(get_positive({}), {}));
    
    return 0;
}