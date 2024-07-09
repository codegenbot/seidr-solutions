```
vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++)
        if(abs(a[i] - b[i]) > 1e-6)
            return false;
    return true;
}

int main() {
    vector<float> l;
    float x;
    cout << "Enter the length of array: ";
    cin >> x;
    l.resize(x);
    for(int i = 0; i < x; i++) {
        cout << "Enter element " << (i+1) << ": ";
        cin >> l[i];
    }
    vector<float> p = get_positive(l);
    bool s = issame(p, l);
    if(s)
        cout << "The two vectors are same." << endl;
    else
        cout << "The two vectors are not same." << endl;
    return 0;
}