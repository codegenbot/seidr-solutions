#include <iostream>
#include <vector>
#include <cassert>

namespace std {

    bool issame(std::vector<float> a, std::vector<float> b){
        return a == b;
    }

    std::vector<float> get_positive(std::vector<float> l){
        std::vector<float> positive_nums;
        for (float num : l) {
            if (num > 0) {
                positive_nums.push_back(num);
            }
        }
        return positive_nums;
    }

}

int main(){
    assert (std::issame(std::get_positive({}) , {}));
    return 0;
}