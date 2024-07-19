#include <vector>

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    vector<float> input = {1.0, 2.0, 3.0, 4.0};
    vector<float> derived = derivative(input);
    
    vector<float> sameInput = {1.0, 2.0, 3.0, 4.0};
    vector<float> differentInput = {4.0, 3.0, 2.0, 1.0};
    
    bool isSame = issame(input, sameInput);
    bool isDifferent = issame(input, differentInput);
    
    return 0;
}