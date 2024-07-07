#include <algorithm>
#include <numeric>
#include <vector>

std::vector<float> find_closest_elements(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    float min_diff = std::numeric_limits<float>::max();
    pair<float, float> closest_pair;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest_pair = {numbers[i], numbers[i + 1]};
        }
    }
    
    bool issame(vector<float> a, vector<float>b){
        return a.size() == b.size() && equal(a.begin(),a.end(),b.begin());
    }
    
    for(int i = 0; i < numbers.size() - 2; i++){
        if(issame({numbers[i], numbers[i + 1]}, {numbers[i + 1], numbers[i + 2]})){
            return vector<float>(numbers.begin() + i, numbers.begin() + i + 3);
        }
    }
    
    return vector<float>(closest_pair.begin(), closest_pair.end());
}