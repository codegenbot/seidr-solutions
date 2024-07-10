#include <algorithm>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    int i = 0, j = 1;
    pair<float, float> closest_pair = make_pair(0.0f, 0.0f);

    while (j < numbers.size()) {
        if (numbers[j] - numbers[i] < min_diff) {
            min_diff = numbers[j] - numbers[i];
            closest_pair = make_pair(numbers[i], numbers[j]);
        }
        if (j + 1 == numbers.size() || numbers[j+1] > numbers[j]) {
            i++;
            j = i + 1;
        } else {
            j++;
        }
    }

    return vector<float>{closest_pair.first, closest_pair.second};
}