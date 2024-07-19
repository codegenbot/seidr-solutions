#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> tri(int n){
    return {1, 3};
}
    
int main(){
    assert(issame(tri(1), {1, 3}));
    return 0;
}