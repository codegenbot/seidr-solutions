#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<vector<float>> filter_vectors(vector<vector<float>> vectors) {
    vector<vector<float>> result;
    for (const auto& v : vectors) {
        if (!issame(get_positive(v), get_positive({}))) {
            result.push_back(v);
        }
    }
    return result;
}