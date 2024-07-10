#include <algorithm>
#include <vector>
#include <utility>

bool issame(vector<pair<float, float>> a, vector<pair<float, float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        pair<float, float> p1 = make_pair(min(a[i].first, a[i].second), max(a[i].first, a[i].second));
        pair<float, float> p2 = make_pair(min(b[i].first, b[i].second), max(b[i].first, b[i].second));
        if (p1 != p2) {
            return false;
        }
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest_pair.first - closest_pair.second)) {
            closest_pair = make_pair(min(numbers[i], numbers[i + 1]), max(numbers[i], numbers[i + 1]));
        }
    }
    return {{closest_pair.first, closest_pair.second}};
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == {{2.2, 3.1}});
    return 0;
}