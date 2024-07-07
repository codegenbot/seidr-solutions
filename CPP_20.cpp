Here is the solution:

vector<pair<float, float>> pairs;
for(int i = 0; i < numbers.size() - 1; ++i) {
    for(int j = i + 1; j < numbers.size(); ++j) {
        pairs.push_back({numbers[i], numbers[j]});
    }
}

sort(pairs.begin(), pairs.end(),
    [](const pair<float, float>& a, const pair<float, float>& b) {
        return abs(a.first - a.second) > abs(b.first - b.second);
});

return vector<float>{pairs[0].first, pairs[0].second};