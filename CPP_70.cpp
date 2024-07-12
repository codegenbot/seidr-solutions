#include <iostream>
#include <vector>
#include <algorithm>

bool areEqualVectors(std::vector<int> const &a, std::vector<int> const &b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    while (!lst.empty()) {
        int first = lst[0];
        int last = lst.back();
        result.push_back(first);
        lst.erase(lst.begin());
        if (first == last) {
            return result;
        }
    }
    return result;
}