vector<pair<float, float>> pairs = {};
for (int i = 0; i < numbers.size() - 1; ++i) {
    for (int j = i + 1; j < numbers.size(); ++j) {
        pairs.push_back({numbers[i], numbers[j]});
    }
}

float min_diff = numeric_limits<float>::max();
pair<float, float> closest_pair = {0.0f, 0.0f};
for (const auto& pair : pairs) {
    float diff = abs(pair.first - pair.second);
    if (diff < min_diff) {
        min_diff = diff;
        closest_pair = pair;
    }
}

return vector<float>({closest_pair.first, closest_pair.second});