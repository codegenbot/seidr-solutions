```
vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> v1, vector<float> v2){
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++){
        if(abs(v1[i] - v2[i]) > 0.00001) return false;
    }
    return true;
}

int main(){
    vector<float> l;
    cout << "Enter numbers separated by space: ";
    for(float x : getline(cin, str).get()) l.push_back(x);
    vector<float> pos = get_positive(l);
    if(pos.size() > 0) {
        for(float i : pos){
            cout << i << " ";
        }
        cout << endl;
        vector<float> same;
        for(int i = 0; i < pos.size(); i++){
            for(int j = i+1; j <= pos.size(); j++){
                if(issame({pos[i]}, {pos[j]})){
                    same.push_back(pos[i]);
                    break;
                }
            }
        }
        cout << "Same numbers: ";
        for(float i : same){
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "No positive numbers." << endl;
    }
}