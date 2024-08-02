#include <vector>
#include <cassert>
#include <utility>

std::pair<int, int> eat(std::vector<int> number, std::vector<int> need, std::vector<int> remaining){
    int total = number[0] + std::min(need[0], remaining[0]);
    int left = std::max(0, remaining[0] - need[0]);
    return {total, left};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b){
    return a.first == b.first && a.second == b.second;
}