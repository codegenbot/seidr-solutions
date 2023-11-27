#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers);

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = INFINITY;
    pair<float, float> closest_elements;
    
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i+1; j < numbers.size(); j++) {
            float diff = abs(numbers[i] - numbers[j]);
            if(diff < min_diff) {
                min_diff = diff;
                closest_elements = make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    vector<float> result;
    result.push_back(closest_elements.first);
    result.push_back(closest_elements.second);
    
    return result;
}

int main() {
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    
    return 0;
}