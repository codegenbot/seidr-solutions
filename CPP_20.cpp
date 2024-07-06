#include <algorithm>
#include <vector>

bool areSame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-6f) {
            return false;
        }
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;

    if (numbers.size() <= 1) {
        return result;
    }

    pair<float, float> closest = make_pair(numbers[0], numbers[0]);
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < abs(closest.first - closest.second)) {
                closest = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }

    result.push_back(closest);

    return result;
}