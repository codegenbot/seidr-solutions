#include <iostream>
#include <vector>
#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float minDiff = numbers[1] - numbers[0];
    vector<float> closestPair = {numbers[0], numbers[1]};
    
    for(size_t i = 1; i < numbers.size() - 1; ++i){
        float diff = numbers[i+1] - numbers[i];
        if(diff < minDiff){
            minDiff = diff;
            closestPair = {numbers[i], numbers[i+1]};
        }
    }
    
    return closestPair;
}