#include <algorithm>
#include <vector>

bool areSame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

vector<float> rescale_to_unit(vector<float> numbers) {
    float min_val = *min_element(numbers.begin(), numbers.end());
    float max_val = *max_element(numbers.begin(), numbers.end());

    vector<float> result;
    for (float num : numbers) {
        result.push_back((num - min_val) / (max_val - min_val));
    }

    return result;
}