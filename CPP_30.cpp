#include <vector>

bool issame(vector<float> a, vector<float> b){
    // function implementation
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(auto num : l){
        if(num > 0){
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}