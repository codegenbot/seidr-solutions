```c++
bool issame(vector<float> a,vector<float>b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}
vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closestPair;
    float minDiff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = {{numbers[i], numbers[j]}};
            } else if (diff == minDiff) {
                closestPair.push_back({{numbers[i], numbers[j]}});
            }
        }
    }
    return closestPair[0];
}