#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    pair<float, float> closest = *min_element(numbers.begin(), numbers.end(),
        [&] (float a, float b) {
            return make_pair(abs(a - numbers[0]), a);
        });
        
    for(auto &num : numbers) {
        if(num == closest.first || num == closest.second)
            continue;
        pair<float, float> temp = { abs(num - closest.first), num };
        result.push_back(temp);
    }
    
    sort(result.begin(), result.end());
    return vector<pair<float, float>>({result[0].second, result[1].second});
}