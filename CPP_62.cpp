#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs);

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    vector<float> test1 = {1.0, 2.0, 3.0, 4.0};
    vector<float> test2 = {1.0, 4.0, 9.0, 16.0};
    
    vector<float> result = derivative(test1);
    
    assert(issame(result, test2));
    
    return 0;
}