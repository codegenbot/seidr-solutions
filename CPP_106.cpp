#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
}