#include <algorithm>
#include <vector>
#include <numeric>
#include <limits>

bool issame(vector<float>, vector<float>);

int main() {
    vector<float> numbers;
    // input your data here
    for (float num : {1.0, 2.0, 3.0, 4.0, 5.0}) {
        numbers.push_back(num);
    }
    
    vector<float> result = find_closest_elements(numbers);
    return 0;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest_pair = {numbers[i], numbers[j]};
            }
        }
    }

    return vector<float>(closest_pair.begin(), closest_pair.end());
}