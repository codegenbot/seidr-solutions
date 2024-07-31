#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    std::vector<int> result;
    int i = 0, j = lst.size() - 1;
    while (i <= j) {
        result.push_back(lst[i++]);
        if (i <= j) {
            result.push_back(lst[j--]);
        }
    }
    return result;
}