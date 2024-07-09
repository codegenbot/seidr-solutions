Here is the solution:

vector<pair<float, float>> pairs;

for(int i = 0; i < numbers.size() - 1; ++i)
{
    for(int j = i + 1; j < numbers.size(); ++j)
    {
        pair<float, float> p = make_pair(numbers[i], numbers[j]);
        pairs.push_back(p);
    }
}

vector<pair<float, float>> sorted_pairs = pairs;

sort(sorted_pairs.begin(), sorted_pairs.end(), 
    [](pair<float, float> p1, pair<float, float> p2) {
        return abs(p1.first - p1.second) < abs(p2.first - p2.second);
    });

return vector<float> {sorted_pairs[0].first, sorted_pairs[0].second};