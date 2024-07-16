#include <vector>

bool issame(vector<float> a, vector<float> b);

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

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

int main(){
    vector<float> test1 = {1.0, 2.0, 3.0};
    vector<float> test2 = {1.0, 4.0, 6.0};
    
    vector<float> result = derivative(test1);
    
    if(issame(result, test2)){
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}