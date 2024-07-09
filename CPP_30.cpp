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
    if(v1.size() != v2.size())
        return false;

    for(int i = 0; i < v1.size(); i++){
        if(abs(v1[i] - v2[i]) > 1e-6)
            return false;
    }

    return true;
}

int main(){
    vector<float> a, b;
    
    cin >> a.size();
    for(float &i : a) 
        cin >> i;

    cin >> b.size();
    for(float &i : b) 
        cin >> i; 

    if(issame(a, b))
        cout << "Same\n";
    else
        cout << "Not Same\n";

    vector<float> pos_a = get_positive(a);
    vector<float> pos_b = get_positive(b);

    cout << "Positive: ";
    for(float &i : pos_a) 
        cout << i << " ";

    cout << endl;
    return 0;
}