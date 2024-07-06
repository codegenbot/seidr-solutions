#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> evens;
    std::vector<float> odds;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evens.push_back(l[i]);
        } else {
            odds.push_back(l[i]);
        }
    }

    std::sort(evens.begin(), evens.end());

    std::vector<float> result;
    int idx = 0;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back,evens[idx++]);
        } else {
            result.push_back(odds[i - idx]);
        }
    }

    return result;
}