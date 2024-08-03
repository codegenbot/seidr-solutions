#include <algorithm>
#include <vector>
#include <numeric>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    vector<float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }

    return closest_pair;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), vector<float>({2.2, 3.1}));
    // ...
}