vector<float> sort_even(vector<float> l){
    vector<float> result = l;
    vector<float> even_indices;
    
    for(int i=0; i<l.size(); i+=2){
        even_indices.push_back(l[i]);
    }
    
    sort(even_indices.begin(), even_indices.end());
    
    for(int i=0, j=0; i<l.size(); i+=2, j++){
        result[i] = even_indices[j];
    }
    
    return result;
}