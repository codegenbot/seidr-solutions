#include <vector>

bool issame(const vector<float>& xs, const vector<float>& ys){
    if(xs.size() != ys.size()){
        return false;
    }
    for(int i = 0; i < xs.size(); i++){
        if(xs[i] != ys[i]){
            return false;
        }
    }
    return true;
}

vector<float> derivative(const vector<float>& xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}