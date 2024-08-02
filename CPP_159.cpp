#include <algorithm>
#include <utility>
#include <cassert>

std::pair<int, int> eat(int number, int need, int remaining){
    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a == b;
}

int main(){
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    return 0;
}