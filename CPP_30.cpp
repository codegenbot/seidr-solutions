#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }

    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }

    return true;
}

vector<float> get_positive(vector<float> input_values){
    vector<float> positive_values;

    for(float val : input_values){
        if(val > 0){
            positive_values.push_back(val);
        }
    }

    return positive_values;
}