```c
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

bool issame(vector<float> a, vector<float> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<vector<float>> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    vector<vector<float>> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = {{numbers[i], numbers[j]}};
            }
        }
    }

    return closest_pair;
}