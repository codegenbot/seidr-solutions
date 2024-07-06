#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> sort_even(vector<float> l) {
    auto evenVals = l;
    auto oddVals = l;

    // Sort all values
    std::sort(evenVals.begin(), evenVals.end());
    std::sort(oddVals.begin(), oddVals.end());

    // Copy sorted even and odd values to result array
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = evenVals[0];
            evenVals.erase(evenVals.begin());
        } else {
            l[i] = oddVals[0];
            oddVals.erase(oddVals.begin());
        }
    }

    return l;
}