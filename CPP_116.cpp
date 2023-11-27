#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <bitset>

std::vector<int> sort_array(const std::vector<int>& arr) {
    std::vector<int> sorted_arr = arr;
    std::sort(sorted_arr.begin(), sorted_arr.end(), [](int a, int b) {
        int countA = std::bitset<32>(a).count();
        int countB = std::bitset<32>(b).count();
        if (countA == countB) {
            return a < b;
        }
        return countA < countB;
    });
    return sorted_arr;
}

int main() {
    std::vector<int> expected = {2, 4, 8, 16, 32};
    std::vector<int> sorted = sort_array({2, 4, 8, 16, 32});
    assert(std::equal(sorted.begin(), sorted.end(), std::begin(expected)));
    return 0;
}