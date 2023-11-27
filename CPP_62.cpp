#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    // Test cases
    vector<float> input1 = {1, 2, 3, 4, 5};
    vector<float> output1 = {2, 6, 12, 20};
    assert(issame(derivative(input1), output1));

    vector<float> input2 = {2, 4, 6, 8, 10};
    vector<float> output2 = {4, 12, 24, 40};
    assert(issame(derivative(input2), output2));

    vector<float> input3 = {3, 6, 9, 12, 15};
    vector<float> output3 = {6, 18, 36, 60};
    assert(issame(derivative(input3), output3));

    return 0;
}