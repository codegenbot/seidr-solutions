#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sortVector(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int countA = std::bitset<32>(a).count();
        int countB = std::bitset<32>(b).count();
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return arr;
}

int main() {
    assert(issame(sortVector({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}