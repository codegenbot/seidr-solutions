#include <vector>

bool issame(vector<float> a, vector<float> b){
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

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

int main(){
    vector<float> a = {1.0, 2.0, 3.0};
    vector<float> b = {1.0, 2.0, 3.0};

    if(issame(a, b)){
        vector<float> positive_a = get_positive(a);
        for(float num : positive_a){
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}