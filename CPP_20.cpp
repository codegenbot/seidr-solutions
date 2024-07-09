#include <algorithm>
#include <numeric>
#include <vector>
#include <utility>

using namespace std;

bool isSame(float num1, float num2) {
    return abs(num1 - num2) < numeric_limits<float>::epsilon();
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            if (isSame(numbers[j], numbers[i])) {
                continue;
            }
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    
    vector<float> result(1, closest_pair.first);
    for (int i = 0; i <= closest_pair.second - closest_pair.first; ++i) {
        result.push_back(closest_pair.first + i);
    }
    return result;
}