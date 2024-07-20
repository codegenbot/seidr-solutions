#include <vector>
#include <algorithm>

using namespace std;

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1)
        return {};

    vector<pair<float, float>> result;
    pair<float, float> closest = {numbers[0], numbers[0]};

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < abs(closest.first - closest.second)) {
                closest = {numbers[i], numbers[j]};
            }
        }
    }

    result.push_back({closest.first, closest.second});
    return result;
}