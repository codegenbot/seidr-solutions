vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even;
    
    for(int i=0; i<l.size(); i+=2){
        even.push_back(l[i]);
    }
    
    sort(even.begin(), even.end());
    
    for(int i=0, j=0; i<l.size(); i+=2, j++){
        result[i] = even[j];
    }
    
    return result;
}