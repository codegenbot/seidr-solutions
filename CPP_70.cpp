```
#include <algorithm>
#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    int min = *lst.rbegin();
    int max = *lst.begin();

    while (!lst.empty()) {
        for (int i : lst) {
            if (i == min) {
                result.push_back(i);
                lst.erase(std::remove(lst.begin(), lst.end(), i), lst.end());
                break;
            }
        }
        sort(lst.begin(), lst.end());
        min = *lst.rbegin();
    }

    return result;
}