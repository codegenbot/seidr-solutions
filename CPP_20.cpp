#include <algorithm>
#include <vector>

bool issame(vector<float> a, vector<float>b) {
    return a.size() == b.size();
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    vector<pair<float, float>> result;
    for (int i = 1; i < numbers.size(); i++) {
        pair<float, float> p = make_pair(numbers[i-1], numbers[i]);
        if (result.empty() || abs(p.first - p.second) < abs(result[0].first - result[0].second)) {
            result.clear();
            result.push_back(p);
        } else if (abs(p.first - p.second) == abs(result[0].first - result[0].second)) {
            result.push_back(p);
        }
    }
    return result;
}