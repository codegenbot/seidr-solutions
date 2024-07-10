#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> sort_third(vector<int>& v) {
    vector<int> l_divisible_by_three;
    vector<int> l_not_divisible_by_three;
    vector<int> l_sorted_divisible_by_three;

    for (int i = 0; i < v.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(v[i]);
        } else {
            l_not_divisible_by_three.push_back(v[i]);
        }
    }

    l_sorted_divisible_by_three = l_divisible_by_three;
    sort(l_sorted_divisible_by_three.begin(), l_sorted_divisible_by_three.end());

    vector<int> result;
    int j = 0;
    int k = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (i % 3 == 0) {
            result.push_back(l_sorted_divisible_by_three[j]);
            ++j;
        } else {
            result.push_back(l_not_divisible_by_three[k]);
            ++k;
        }
    }

    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}