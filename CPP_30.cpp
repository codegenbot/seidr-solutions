#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool is_same(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<float> a = {1.2, 3.4, -5.6, 7.8};
    vector<float> b = {1.2, 3.4, -5.6, 7.8};
    
    if(is_same(a, b)){
        cout << "Vectors are the same" << endl;
    } else {
        cout << "Vectors are different" << endl;
    }
    
    return 0;
}