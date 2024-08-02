#include <iostream>
#include <vector>
#include <cassert>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> eat(int a, int b, int c){
    return {a + b, b - c};
}

int main(){
    assert(issame(eat(4, 5, 1), {9, 4}));
}