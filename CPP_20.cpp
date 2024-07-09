```
#include <algorithm>
#include <vector>
#include <limits>
#include <utility>
#include <initializer_list>

bool issame(vector<float> a,vector<float>b){
    return a==b;
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    pair<float, float> closest;
    float min_diff = std::numeric_limits<float>::max();
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = numbers[j] - numbers[i];
            if (abs(diff) < min_diff) {
                min_diff = abs(diff);
                closest = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    return {closest};
}