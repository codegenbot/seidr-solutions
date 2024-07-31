#include <vector>
#include <cassert>

namespace vector {
    bool issame(std::vector<int> a, std::vector<int> b){
        return a == b;
    }
}

std::vector<int> eat(int a, int b, int c){
    return {b, a - c};
}

int main(){
    assert(vector::issame(eat(4, 5, 1), {5, 3}));
    return 0;
}