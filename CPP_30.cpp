#include <iostream>
#include <vector>
#include <cassert>

namespace std {
    using vector;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for (float num : l) {
        if (num > 0) {
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

int main(){
    assert (issame(get_positive({}) , {}));
    return 0;
}