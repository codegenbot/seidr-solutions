```cpp
bool issame(vector<float> a,vector<float>b){
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<pair<float, float>> find_closest_elements(vector<vector<float>>& numbers) {
    vector<pair<float, float>> pairs = {};
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j <= numbers.size() - 1; j++) {
            pairs.push_back({numbers[i][0], numbers[j][0]});
        }
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    for (auto &p : pairs) {
        float diff = p.second - p.first;
        if (abs(diff) < abs(min_diff)) {
            min_diff = diff;
            closest_pair = p;
        }
    }

    return {closest_pair.first, closest_pair.second};
}