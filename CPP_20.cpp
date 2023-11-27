#include <iostream>
#include <vector>
#include <cmath>
#include <utility>
#include <cassert>

std::vector<float> find_closest_elements(std::vector<float> numbers){
    float min_diff = std::numeric_limits<float>::max();
    std::pair<float, float> closest_elements;
    
    for(int i=0; i<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            float diff = std::abs(numbers[i] - numbers[j]);
            if(diff < min_diff){
                min_diff = diff;
                closest_elements = std::make_pair(numbers[i], numbers[j]);
            }
        }
    }
    
    std::vector<float> result;
    result.push_back(closest_elements.first);
    result.push_back(closest_elements.second);
    
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<float> result = find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1});
    assert(issame(result, {2.2, 3.1}));
    
    return 0;
}