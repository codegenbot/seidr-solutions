#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

pair<float, float> find_closest_elements(const vector<float> &numbers);

pair<float, float> find_closest_elements(const vector<float> &numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        if (numbers[i + 1] - numbers[i] < min_diff) {
            min_diff = numbers[i + 1] - numbers[i];
            result = {numbers[i], numbers[i + 1]};
        }
    }
    return {result.first, result.second};
}

int main() {
    assert(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}) == make_pair(2.2, 3.1));
    return 0;
}