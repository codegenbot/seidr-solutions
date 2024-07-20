Here is the solution:

#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    pair<float, float> closest;

    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (closest.first == 0 || abs(numbers[i] - numbers[j]) < abs(closest.second - closest.first)) {
                closest = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    result.push_back(closest);
    return vector<float>({closest.first, closest.second});
}