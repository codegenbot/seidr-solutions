#include <algorithm>
#include <vector>
using namespace std;

vector<float> find_closest_elements(vector<float> numbers) {
    vector<float> closest;
    float min_diff = numeric_limits<float>::max();
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (abs(numbers[i] - numbers[j]) < min_diff) {
                min_diff = abs(numbers[i] - numbers[j]);
                closest = {numbers[i], numbers[j]};
            }
        }
    }
    return closest;
}