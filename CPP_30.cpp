vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> l1, vector<float> l2) {
    if(l1.size() != l2.size()) {
        return false;
    }
    for(int i = 0; i < l1.size(); i++) {
        if(abs(l1[i] - l2[i]) > 0.0001) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> v1, v2;
    int n1, n2;
    
    cout << "Enter size of first list: ";
    cin >> n1;
    for(int i = 0; i < n1; i++) {
        float x;
        cin >> x;
        v1.push_back(x);
    }
    
    cout << "Enter size of second list: ";
    cin >> n2;
    for(int i = 0; i < n2; i++) {
        float y;
        cin >> y;
        v2.push_back(y);
    }
    
    vector<float> pos_v1 = get_positive(v1);
    vector<float> pos_v2 = get_positive(v2);
    
    if(issame(pos_v1, pos_v2)) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "The two lists are not the same." << endl;
    }
    
    return 0;
}