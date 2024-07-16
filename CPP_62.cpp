#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    vector<float> input = {1.0, 2.0, 3.0, 4.0};
    vector<float> result = derivative(input);
    vector<float> expected = {2.0, 6.0, 12.0};
    if(issame(result, expected)){
        return 0;
    } else {
        return 1;
    }
}