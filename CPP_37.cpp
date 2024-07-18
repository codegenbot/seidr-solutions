#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> l);

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> l_odd, l_even_sorted;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            l_even_sorted.push_back(l[i]);
        } else {
            l_odd.push_back(l[i]);
        }
    }
    sort(l_even_sorted.begin(), l_even_sorted.end());
    std::vector<float> result;
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 2 == 0) {
            result.push_back(l_even_sorted[j++]);
        } else {
            result.push_back(l_odd[i / 2]);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}