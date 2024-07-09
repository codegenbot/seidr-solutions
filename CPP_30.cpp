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
        if(abs(v1[i] - v2[i]) > 0.000001f)
            return false;
    return true;
}

int main(){
    vector<float> v1, v2;
    float num;
    cout << "Enter the numbers for v1 (end with a negative number):" << endl;
    while(cin >> num && num >= 0) {
        v1.push_back(num);
    }
    cout << "Enter the numbers for v2 (end with a negative number):" << endl;
    while(cin >> num && num >= 0) {
        v2.push_back(num);
    }  
    vector<float> p = get_positive(v1); 
    if(issame(p, get_positive(v2))) 
        cout << "v1 and v2 contain the same positive numbers" << endl;
    else
        cout << "v1 and v2 do not contain the same positive numbers" << endl;  
    return 0;
}