#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (abs(a[i] - b[i]) > 1e-9)
            return false;
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair.first = numbers[i];
            closest_pair.second = numbers[i + 1];
        }
    }

    return {{closest_pair.first, closest_pair.second}};
}

int main() {
    vector<float> numbers = {1.1, 2.2, 3.1, 4.1, 5.1};
    vector<pair<float, float>> result = find_closest_elements(numbers);
    // Use the function
    assert(issame({2.2, 3.1}, result[0].first && result[0].second);
}