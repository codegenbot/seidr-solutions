#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    float minDiff = numbers[1] - numbers[0];
    pair<float, float> result = {numbers[0], numbers[1]};
    for(int i=1; i<numbers.size()-1; i++){
        if(numbers[i+1] - numbers[i] < minDiff){
            minDiff = numbers[i+1] - numbers[i];
            result = {numbers[i], numbers[i+1]};
        }
    }
    return {result.first, result.second};
}