#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<float> sort_even(const std::vector<float>& l) {
    vector<float> evenVals;
    for (int j = 0; j < l.size(); j++) {
        if (j % 2 == 0) {
            evenVals.push_back(l[j]);
        }
    }
    sort(evenVals.begin(), evenVals.end());
    return evenVals;
}

vector<float> main() {
    vector<float> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    vector<float> result(l.size());
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = sort_even(l)[0];
        } else {
            result[i] = l[i];
        }
    }
    return result;
}