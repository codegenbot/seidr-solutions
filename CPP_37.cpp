#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
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

std::vector<float> mainResult(const std::vector<float>& l) {
    std::vector<float> result(l.size());
    std::vector<float> evenVals = sort_even(l);
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = evenVals[0];
            evenVals.erase(evenVals.begin());
        } else {
            result[i] = l[i];
        }
    }
    return result;
}

int main() {
    std::vector<float> l = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<float> result = mainResult(l);
    return 0;
}