#include <algorithm>
#include <numeric>
#include <vector>
#include <limits>
#include <utility>

using namespace std;

bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); ++i)
        if (abs(a[i] - b[i]) > 1e-9)
            return false;
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    vector<float> result;
    for (float num : {closest_pair.first, closest_pair.second}) {
        if (find(begin(result), end(result), num) == end(result))
            result.push_back(num);
        else
            break;
    }

    return result;
}