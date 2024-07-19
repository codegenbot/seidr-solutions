#include <vector>
#include <cassert>

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

std::vector<float> get_positive(std::vector<float> v){
    std::vector<float> positive_values;
    for(float val : v){
        if(val > 0){
            positive_values.push_back(val);
        }
    }
    return positive_values;
}

void main(){
    assert(issame(get_positive({}), {}));
}