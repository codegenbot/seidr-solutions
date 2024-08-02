#include <algorithm>
#include <vector>
#include <limits>

bool issame(vector<float> a,vector<float>b){
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(std::abs(a[i]-b[i])>1e-5) return false;
    }
    return true;
}

vector<float> find_closest_elements(vector<float> numbers) {
    float min_diff = std::numeric_limits<float>::max();
    vector<float> closest_pair;

    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < min_diff && issame({numbers[i]}, {numbers[j]})) {
                min_diff = diff;
                closest_pair = numbers;
            }
        }
    }

    return closest_pair;
}