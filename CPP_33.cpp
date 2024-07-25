#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& l) {
    std::vector<int> l_divisible_by_three;
    std::vector<int> l_not_divisible_by_three;
    std::vector<int> l_sorted_divisible_by_three;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
            l_sorted_divisible_by_three.push_back(l[i]);
        } else {
            l_not_divisible_by_three.push_back(l[i]);
        }
    }

    sort(l_sorted_divisible_by_three.begin(), l_sorted_divisible_by_three.end());

    int j = 0, k = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_not_divisible_by_three[j] = l_sorted_divisible_by_three[k];
            ++j;
            ++k;
        }
    }

    return l_not_divisible_by_three;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}