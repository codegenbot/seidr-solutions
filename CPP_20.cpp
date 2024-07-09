Here is the completed code:

vector<pair<float, float>> pairs;

for (int i = 0; i < numbers.size() - 1; i++) {
    for (int j = i + 1; j < numbers.size(); j++) {
        pairs.push_back({numbers[i], numbers[j]});
    }
}

float min_diff = numeric_limits<float>::max();
pair<float, float> closest_pair;

for (auto p : pairs) {
    float diff = abs(p.second - p.first);
    if (diff < min_diff) {
        min_diff = diff;
        closest_pair = p;
    }
}

return vector<float>(closest_pair);