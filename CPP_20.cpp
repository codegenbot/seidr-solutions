vector<pair<float, float>> pairs;

for(int i = 0; i < numbers.size() - 1; ++i){
    for(int j = i + 1; j < numbers.size(); ++j){
        pairs.push_back({numbers[i], numbers[j]});
    }
}

pair<float, float> closest_pair = *min_element(pairs.begin(), pairs.end(), 
    [&] (const pair<float, float>& p1, const pair<float, float>& p2) {
        return abs(p1.first - p1.second) > abs(p2.first - p2.second);
});

return {closest_pair.first, closest_pair.second};