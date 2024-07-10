#include <algorithm>

vector<float> find_closest_elements(vector<float> numbers) {
    sort(numbers.begin(), numbers.end());
    float min_diff = numeric_limits<float>::max();
    vector<float> closest;
    
    for (int i = 0; i < numbers.size() - 1; ++i) {
        float diff = numbers[i + 1] - numbers[i];
        if (diff < min_diff) {
            min_diff = diff;
            closest = {numbers[i], numbers[i + 1]};
        }
    }
    
    return closest;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size()!=b.size()) return false;
    std::sort(a.begin(),a.end());
    std::sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}