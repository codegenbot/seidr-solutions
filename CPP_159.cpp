#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> eat(int a, int b, int c){
    return {a, b, c};
}

int main(){
    assert(issame({5, 0}, {5, 0}));
    assert(issame(eat(4, 5, 1), {4, 5, 1}));
    return 0;
}