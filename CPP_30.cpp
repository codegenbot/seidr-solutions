#include <vector>
#include <cassert>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool issame(std::vector<float> a, std::vector<float> b);

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}