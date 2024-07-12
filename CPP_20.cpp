#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<float>& v1, const vector<float>& v2){
    return v1.size() == v2.size() && equal(v1.begin(), v1.end(), v2.begin());
}

pair<float, float> find_closest_elements(const vector<float>& numbers){
    vector<float> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end());
    
    float min_diff = sortedNumbers[1] - sortedNumbers[0];
    pair<float, float> result = {sortedNumbers[0], sortedNumbers[1]};
    
    for(int i = 1; i < sortedNumbers.size() - 1; ++i){
        if(sortedNumbers[i+1] - sortedNumbers[i] < min_diff){
            min_diff = sortedNumbers[i+1] - sortedNumbers[i];
            result = {sortedNumbers[i], sortedNumbers[i+1]};
        }
    }
    
    return {result.first, result.second};
}

int main() {
    vector<float> numbers = {2.5, 1.5, 5.0, 7.5, 3.0};
    auto closest = find_closest_elements(numbers);
    
    for(auto num : closest){
        cout << num << " ";
    }
    
    return 0;
}