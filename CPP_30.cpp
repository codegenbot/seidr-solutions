#include <iostream>
#include <vector>

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main(){
    assert(is_same(get_positive({}) , {}));
    return 0;
}