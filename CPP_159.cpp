#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = remaining - eaten;
    return std::vector<int>{eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}