#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        return {};
    }
    
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j <= numbers.size() - 1; ++j) {
            if (abs(numbers[i] - numbers[j]) < abs(closest_pair.first - closest_pair.second)) {
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}