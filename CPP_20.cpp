#include <algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    int n = numbers.size();
    float min_diff = numeric_limits<float>::max();

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if (diff < min_diff) {
                min_diff = diff;
                vector<float> result = {numbers[i], numbers[j]};
                sort(result.begin(), result.end());
                return result;
            }
        }
    }

    return {};
}