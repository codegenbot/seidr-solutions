#include<algorithm>

vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float min_diff = fabs(numbers[1] - numbers[0]);
    pair<float, float> closest_pair = {numbers[0], numbers[1]};
    
    for (size_t i = 1; i < numbers.size() - 1; ++i) {
        float diff = fabs(numbers[i + 1] - numbers[i]);
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    return {closest_pair.first, closest_pair.second};
}