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

int main(){
    vector<float> numbers;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    for(int i = 0; i < n; i++){
        float x;
        cout << "Enter element " << (i+1) << ": ";
        cin >> x;
        numbers.push_back(x);
    }
    
    vector<float> pos_nums = get_positive(numbers);
    
    if(pos_nums.size() > 0){
        bool same = issame({pos_nums[0]}, pos_nums);
        cout << "All positive numbers are the same: " << (same ? "Yes" : "No") << endl;
    }
    else{
        cout << "No positive numbers found." << endl;
    }
    
    return 0;
}