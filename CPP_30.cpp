#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> values){
    std::vector<float> positive_values;
    for(float val : values){
        if(val > 0){
            positive_values.push_back(val);
        }
    }
    return positive_values;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main(){
    assert(issame(get_positive({}), {}));
    return 0;
}