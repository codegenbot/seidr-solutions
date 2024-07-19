#include <vector>
#include <assert.h>

std::vector<float> derivative(std::vector<float> xs){
    std::vector<float> result;
    for(unsigned int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b){
    return a == b;
}

int main(){
    std::vector<float> input1 = {1.0, 2.0, 3.0, 4.0};
    std::vector<float> result1 = derivative(input1);

    std::vector<float> input2 = {1.0, 2.0, 3.0, 4.0};
    std::vector<float> input3 = {2.0, 4.0, 6.0, 8.0};
    bool same1 = issame(input1, input2);
    bool same2 = issame(input2, input3);

    assert(issame(derivative({1.0}), {}));
    
    return 0;
}