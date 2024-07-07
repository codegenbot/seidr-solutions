#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers) {
    double min_diff = DBL_MAX;
    pair<float, float> closest_pair = make_pair(numbers[0], numbers[0]);

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            double diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = make_pair(numbers[i], numbers[j]);
            }
        }
    }

    return closest_pair;
}