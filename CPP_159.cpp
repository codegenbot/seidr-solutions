```cpp
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Eat(int number, int need, int remaining) {
    int total = number + need;
    int left = (total > 1000 ? 1000 : total);
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}