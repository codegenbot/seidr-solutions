#include <iostream>
#include <vector>

bool checkVectors(const std::vector<int>& a, const std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}

int main() {
    assert(checkVectors({eat(4, 5, 1)}, std::vector<int>({9, 0})));
    return 0;
}