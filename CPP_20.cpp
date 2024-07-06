```
#include <vector>
#include <algorithm>
#include <cmath>

bool isSame(pair<float, float> p1, pair<float, float> p2) {
    return (p1.first == p2.first && p1.second == p2.second);
}

vector<pair<float, float>> find_closest_elements(vector<float> numbers);

vector<pair<float, float>> find_closest_elements(vector<float> numbers) {
    vector<pair<float, float>> result;
    
    if (numbers.size() <= 1) {
        return result;
    }
    
    pair<float, float> closest = make_pair(numbers[0], numbers[0]);
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            if (abs(numbers[i] - numbers[j]) < abs(closest.first - closest.second)) {
                closest = make_pair(min(numbers[i], numbers[j]), max(numbers[i], numbers[j]));
            }
        }
    }
    
    result.push_back(closest);
    
    return result;
}