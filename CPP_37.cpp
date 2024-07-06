#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<float> sort_even(vector<float> l) {
    vector<float> result(l.size());
    auto evenVals = l;
    auto oddVals = l;
    
    std::stable_partition(evenVals.begin(), evenVals.end(),
        [](float x){return fabs(x) % 2 == 0;});
    std::stable_partition(oddVals.begin(), oddVals.end(),
        [](float x){return fabs(x) % 2 != 0;});

    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result[i] = evenVals[0];
            evenVals.erase(evenVals.begin());
        } else {
            result[i] = oddVals[0];
            oddVals.erase(oddVals.begin());
        }
    }
    return result;
}