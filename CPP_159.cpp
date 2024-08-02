#include <vector>
#include <cassert>
#include <utility>

std::pair<int, int> eat(int number, int need, int remaining){
    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}