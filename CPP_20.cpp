#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float closest_diff = numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        if (numbers[i + 1] - numbers[i] < closest_diff) {
            closest_diff = numbers[i + 1] - numbers[i];
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return vector<float>(closest_pair);
}