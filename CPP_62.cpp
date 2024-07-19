#include <vector>

bool issame(float a, float b){
    return a == b;
}

vector<float> derivative(vector<float> xs);

int main() {
    // main function code here
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}