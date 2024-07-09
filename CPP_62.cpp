#include <vector>

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(vector<float> vec1, vector<float> vec2){
    return vec1 == vec2;
}

int main(){
    vector<float> input = {1.1, 2.2, 3.3, 4.4, 5.5};
    vector<float> result = derivative(input);
    return 0;
}