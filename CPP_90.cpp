#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    for (int num : lst) {
        if (num > prev) {
            count++;
            if (count == 1) {
                return num;
            }
        }
        prev = num;
    }
    return -1;
}