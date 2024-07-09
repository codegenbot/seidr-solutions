#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> closest;
    pair<float, float> minPair = make_pair(numbers[0], numbers[0]);
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[j] - numbers[i]) < abs(minPair.second - minPair.first)) {
                minPair = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    closest.push_back(minPair);
    return closest;
}