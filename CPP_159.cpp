#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c){
    return {b, a - c};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}