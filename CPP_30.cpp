#include <vector>

vector<bool> get_positive(vector<float> l){
    vector<bool> result;
    for(float num : l) {
        if(num > 0)
            result.push_back(true);
        else
            result.push_back(false);
    }
    return result;
}