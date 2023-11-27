#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    vector<float> result;
    float minDiff = INT_MAX;
    
    for(int i = 0; i < numbers.size() - 1; i++){
        float diff = abs(numbers[i] - numbers[i+1]);
        if(diff < minDiff){
            minDiff = diff;
            result.clear();
            result.push_back(numbers[i]);
            result.push_back(numbers[i+1]);
        }
    }
    
    return result;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    assert(issame(find_closest_elements({1.1, 2.2, 3.1, 4.1, 5.1}), {2.2, 3.1}));
    return 0;
}