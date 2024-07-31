#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c) {
    return {b, c};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(eat(4, 5, 1), {5, 1}));
    return 0;
}