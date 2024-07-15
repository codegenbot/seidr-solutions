#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    return {1, n + 2};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(tri(1), std::vector<int>{1, 3}));
}