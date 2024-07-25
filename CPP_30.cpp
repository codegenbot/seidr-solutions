#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}