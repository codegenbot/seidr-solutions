#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    int n = numbers.size();
    float minDiff = numeric_limits<float>::max();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < minDiff) {
                minDiff = diff;
                pair<float, float> closestPair = make_pair(minmax(numbers[i], numbers[j]).first, minmax(numbers[i], numbers[j]).second);
                swap(closestPair.first, closestPair.second);  // Ensure the order is smaller number first
            }
        }
    }

    return vector<pair<float, float>>({closestPair});
}