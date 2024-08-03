#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> sort_third(std::vector<int> l);

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> res = l;
    std::vector<int> sorted_third;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_third.push_back(l[i]);
        }
    }
    std::sort(sorted_third.begin(), sorted_third.end());
    int idx = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            res[i] = sorted_third[idx++];
        }
    }
    return res;
}