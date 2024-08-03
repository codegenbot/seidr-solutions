#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sorted_lst = lst;
    sort(sorted_lst.begin(), sorted_lst.end());
    int count = 0;
    int prev = sorted_lst[0];
    for (int num : sorted_lst) {
        if (num != prev) {
            count++;
            if (count == 2) {
                return num;
            }
            prev = num;
        }
    }
    return -1;
}

int main() {
    assert(next_smallest({-35, 34, 12, -45}) == -35);
    assert(next_smallest({2, 2, 1, 1, 3}) == 2);
    return 0;
}