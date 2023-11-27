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

std::vector<float> issame(std::vector<float> a, std::vector<float> b){
    // Complete the implementation of issame function
    std::vector<float> same_nums;
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<b.size(); j++){
            if(a[i] == b[j]){
                same_nums.push_back(a[i]);
                break;
            }
        }
    }
    return same_nums;
}

int main(){
    assert(get_positive({}) == std::vector<float>{});
    // Additional assertions
    return 0;
}