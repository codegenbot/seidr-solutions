#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float>b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> evenVals;
    std::vector<float> oddVals;

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            evenVals = std::vector<float>(l.begin() + i, l.begin() + i+1);
            std::sort(evenVals.begin(), evenVals.end());
            return evenVals;
        } else {
            oddVals.push_back(l[i]);
        }
    }

    return l;
}