#include <vector>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> eat(int a, int b){
    return {a+b, a-b};
}

int main(){
    assert(issame(eat(4, 5) , {9, -1}));
    return 0;
}