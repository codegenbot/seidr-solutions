#include <algorithm>

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float minDiff = numeric_limits<float>::max();
        pair<float, float> closestPair;
        
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = abs(numbers[j] - numbers[i]);
            
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = make_pair(numbers[i], numbers[j]);
            }
        }
        
        result.push_back(closestPair);
    }
    
    return result;
}