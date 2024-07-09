#include <vector>

bool issame(vector<float> values1, vector<float> values2){
    if(values1.size() != values2.size()){
        return false;
    }
    for(int i=0; i<values1.size(); i++){
        if(values1[i] != values2[i]){
            return false;
        }
    }
    return true;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}

int main(){
    vector<float> values = {1.0, 2.5, 4.3, 7.2, 11.8};
    vector<float> d_values = derivative(values);
    return 0;
}