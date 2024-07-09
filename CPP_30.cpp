vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    vector<float> l1 = {1.2, -3.4, 5.6};
    vector<float> l2 = {-7.8, 9.10, 11.12};
    
    vector<float> pos_l1 = get_positive(l1);
    vector<float> pos_l2 = get_positive(l2);
    
    if(issame(pos_l1, pos_l2)) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "The two lists are not the same." << endl;
    }
    
    return 0;
}