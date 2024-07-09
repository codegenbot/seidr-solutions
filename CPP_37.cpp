#include <vector>
#include <algorithm>

bool issame(std::vector a, std::vector b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> evenVals;
    for (int j = 0; j < l.size(); j++) {
        if (j % 2 == 0) {
            evenVals.push_back(l[j]);
        }
    }
    std::sort(evenVals.begin(), evenVals.end());
    return evenVals;
}

int main() {
    std::vector<float> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = sort_even(l)[0];
        } else {
            result[i] = l[i];
        }
    }
    return 0;
}