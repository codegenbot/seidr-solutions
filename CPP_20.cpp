#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest = {numbers[0], numbers[1]};
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[j] - numbers[i]) < abs(closest.second - closest.first)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    return {{closest.first, closest.second}};
}