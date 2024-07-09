vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) {
        return false;
    }
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> l1 = {1.0f, -2.0f, 3.0f};
    vector<float> l2 = {-4.0f, 5.0f, 6.0f};
    
    vector<float> pos_l1 = get_positive(l1);
    vector<float> pos_l2 = get_positive(l2);
    
    if(issame(pos_l1, pos_l2)) {
        cout << "The two lists are the same" << endl;
    } else {
        cout << "The two lists are not the same" << endl;
    }
    
    return 0;
}