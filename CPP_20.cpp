vector<pair<float, float>> closest_pairs;

for (int i = 0; i < numbers.size() - 1; ++i) {
    for (int j = i + 1; j < numbers.size(); ++j) {
        pair<float, float> pair {numbers[i], numbers[j]};
        closest_pairs.push_back(pair);
    }
}

pair<float, float> min_pair = *min_element(closest_pairs.begin(), closest_pairs.end(),
    [](const auto& a, const auto& b) {
        return abs(a.first - a.second) > abs(b.first - b.second);
    });

return vector<float> {min_pair.first, min_pair.second};