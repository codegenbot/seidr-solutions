#include <vector>

bool issame(std::vector<float> a, std::vector<float> b){
    if(a.size() != b.size()) {
        return false;
    } else {
        for(int i = 0; i < a.size(); i++){
            if(a[i] != b[i]){
                return false;
            }
        }
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> positive_numbers;
    for (float num : l) {
        if (num > 0) {
            positive_numbers.push_back(num);
        }
    }
    return positive_numbers;
}

int main(){
    assert(issame(get_positive({}), {}));
}