#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> eat(int a, int b, int c){
    return {a + b, b - c};
}