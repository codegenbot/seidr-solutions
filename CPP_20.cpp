vector<pair<float, float>> closest_pairs;

for (int i = 0; i < numbers.size() - 1; ++i) {
    for (int j = i + 1; j < numbers.size(); ++j) {
        closest_pairs.push_back({numbers[i], numbers[j]});
    }
}

sort(closest_pairs.begin(), closest_pairs.end(),
    [](const pair<float, float>& a, const pair<float, float>& b) {
        return abs(a.first - a.second) > abs(b.first - b.second);
    });

return vector<float>{closest_pairs[0].first, closest_pairs[0].second};