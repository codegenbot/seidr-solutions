#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(eat(4, 5, 1), {5, 0}));
}