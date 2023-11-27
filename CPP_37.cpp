vector<float> sort_even(vector<float> l){
    vector<float> result;
    vector<float> even_indices;
    
    for(int i=0; i<l.size(); i++){
        if(i % 2 == 0){
            even_indices.push_back(l[i]);
        }
        result.push_back(l[i]);
    }
    
    sort(even_indices.begin(), even_indices.end());
    
    int j = 0;
    for(int i=0; i<result.size(); i++){
        if(i % 2 == 0){
            result[i] = even_indices[j];
            j++;
        }
    }
    
    return result;
}