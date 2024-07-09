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

bool issame(vector<float> v1, vector<float> v2) {
    if(v1.size() != v2.size()) 
        return false; 
    for(int i = 0; i < v1.size(); i++) 
        if(v1[i] != v2[i]) 
            return false;
    return true;
}

int main() {
    vector<float> l1, l2;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << (i+1) << ": ";
        cin >> x;
        l1.push_back(x);
    }
    vector<float> pos_l1 = get_positive(l1);
    int m;
    cout << "Enter the number of elements: ";
    cin >> m;
    for(int i = 0; i < m; i++) {
        float y;
        cout << "Enter element " << (i+1) << ": ";
        cin >> y;
        l2.push_back(y);
    }
    vector<float> pos_l2 = get_positive(l2);
    if(issame(pos_l1, pos_l2))
        cout << "The two lists are the same." << endl;
    else
        cout << "The two lists are not the same." << endl;
    return 0;
}