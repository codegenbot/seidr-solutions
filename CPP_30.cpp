#include <iostream>
#include <vector>
#include <assert.h>

bool issame(vector<float> a,vector<float>b) { 
    return a == b; 
}

int main() {
    vector<float> input = {}; 
    assert(std::equal(get_positive(input).begin(), get_positive(input).end(), input.begin()));
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}