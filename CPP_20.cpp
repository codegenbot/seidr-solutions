#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>

bool issame(vector<float> a, vector<float> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<vector<float>> group_similar_elements(vector<vector<float>> numbers) {
    sort(numbers.begin(), numbers.end(), [](const auto &a, const auto &b) {
        if (issame(a, b)) {
            return a < b;
        }
        return a[0] < b[0];
    });

    vector<vector<float>> result;

    for (int i = 0; i < numbers.size(); ++i) {
        if (i == 0 || !issame(numbers[i], numbers[i - 1])) {
            result.push_back({numbers[i][0], numbers[i][1]});
        }
    }

    return result;
}