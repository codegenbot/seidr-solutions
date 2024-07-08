```cpp
std::pair<std::pair<float, float>> find_closest_elements(vector<float> v1, vector<float> v2) {
    pair<float, float> result;
    int min_diff = INT_MAX;
    for (int i = 0; i < v1.size(); ++i) {
        for (int j = 0; j < v2.size(); ++j) {
            if (abs(v1[i] - v2[j]) < min_diff) {
                result.first = v1[i];
                result.second = v2[j];
                min_diff = abs(v1[i] - v2[j]);
            }
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}