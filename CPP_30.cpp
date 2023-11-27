#include <vector>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()){
        return false;
    } else {
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
}

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
    assert(issame(get_positive({}), {}));
    return 0;
}