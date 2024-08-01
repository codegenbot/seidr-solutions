#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> find_closest_elements(vector<float> numbers) {
    if (numbers.size() < 2) {
        throw std::invalid_argument("Vector must have at least two elements");
    }

    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest_pair = make_pair(min(i, j), max(i, j));
            }
        }
    }

    return {closest_pair.first, closest_pair.second};
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) , {2.2, 3.1}));
    return 0;
}