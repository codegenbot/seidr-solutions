#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closest = *min_element(numbers.begin(), numbers.end(),
            [&numbers](float a, float b) -> bool {
                float minDiff = numeric_limits<float>::max();
                for (int i = 0; i < numbers.size() - 1; ++i) {
                    if (abs(b - numbers[i]) < minDiff) {
                        minDiff = abs(b - numbers[i]);
                        pair<float, float> closestPair({numbers[i], b});
                    }
                    if (abs(a - numbers[i]) < minDiff) {
                        minDiff = abs(a - numbers[i]);
                        pair<float, float> closestPair({a, numbers[i]});
                    }
                }
                return closestPair.first < closestPair.second;
            });
    result.push_back(closest);
    for (int i = 0; i < numbers.size() - 1; ++i) {
        if (closest == make_pair(numbers[i], numbers[i + 1])) {
            pair<float, float> newClosest({numbers[i + 1], closest.second});
            return vector<pair<float, float>>{{closest.first, closest.second}};
        }
    }
    return vector<pair<float, float>>({closest});
}