#include <algorithm>
#include <vector>
#include <utility>

bool issame(vector<pair<float, float>> a, vector<pair<float, float>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if ((a[i].first <= a[i].second) && (b[i].first <= b[i].second)) {
            if ((a[i].first == a[i].second) && (b[i].first == b[i].second)) {
                if (!(a[i].first == b[i].first)) return false;
            }
            else if (!(abs(a[i].first - a[i].second) == abs(b[i].first - b[i].second))) {
                return false;
            }
        }
        else if ((a[i].first > a[i].second) && (b[i].first > b[i].second)) {
            if (!(a[i].first == b[i].first)) return false;
        }
        else return false;
    }
    return true;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[1]);
    for (int i = 1; i < numbers.size() - 1; ++i) {
        if (abs(numbers[i] - numbers[i + 1]) < abs(closest_pair.first - closest_pair.second)) {
            closest_pair = make_pair(numbers[i], numbers[i + 1]);
        }
    }
    return {{closest_pair.first, closest_pair.second}};
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == {{2.2, 3.1}});
    return 0;
}