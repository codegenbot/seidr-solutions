#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(generate_integers(17, 89), {}));
    return 0;
}