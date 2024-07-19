#include <vector>

vector<float> derivative(vector<float> xs);

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

int main(){
    vector<float> input1 = {1.0, 2.0, 3.0, 4.0};
    vector<float> result1 = derivative(input1);

    vector<float> input2 = {1.0, 2.0, 3.0, 4.0};
    vector<float> input3 = {2.0, 4.0, 6.0, 8.0};
    bool same1 = issame(input1, input2);
    bool same2 = issame(input2, input3);

    return 0;
}