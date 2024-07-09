#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

bool issame(const vector<float>& numbers) {
    return numeric::any_of(numbers.cbegin(), numbers.cend(),
        [n = numbers[0]](float x) { return fabs(x - n) < 1e-9; });
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    if (numbers.size() <= 1) {
        return {};
    }

    auto min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return {closest_pair};
}