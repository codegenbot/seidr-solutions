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
    vector<float> v1 = {1.1, 2.2, 3.3};
    vector<float> v2 = {1.1, 2.2, 3.3};
    
    if(issame(v1, v2)){
        cout << "Vectors are same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }
    
    return 0;
}