#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(size_t i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(size_t i = 1; i < xs.size(); i++){
        result.push_back(xs[i] - xs[i-1]);
    }
    return result;
}

int main(){
    vector<float> vec1 = {1.0, 2.0, 3.0, 4.0};
    vector<float> vec2 = derivative(vec1);

    assert(issame(vec2, {1.0, 1.0, 1.0}));
}