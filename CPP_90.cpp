#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

int next_smallest(const std::vector<int>& lst) {
    std::vector<int> sorted_list = lst;
    std::sort(sorted_list.begin(), sorted_list.end());
    int count = 0;
    for (int i = 1; i < sorted_list.size(); ++i) {
        if (sorted_list[i] > sorted_list[i - 1]) {
            count++;
            if (count == 2) {
                return sorted_list[i];
            }
        }
    }
    return -1;
}

assert(next_smallest({-35, 34, 12, -45}) == -35);