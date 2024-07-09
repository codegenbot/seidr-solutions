#include <vector>

vector<float> derivative(vector<float> xs);

bool issame(vector<float> v1, vector<float> v2){
    if(v1.size() != v2.size()){
        return false;
    }
    for(int i=0; i<v1.size(); i++){
        if(v1[i] != v2[i]){
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
    vector<float> input = {1.0, 2.0, 3.0, 4.0, 5.0};
    vector<float> result = derivative(input);
    return 0;
}