vector<float> even_indices;
    vector<float> odd_indices;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            even_indices.push_back(l[i]);
        } else {
            odd_indices.push_back(l[i]);
        }
    }
    
    sort(even_indices.begin(), even_indices.end());
    
    vector<float> result;
    
    for(int i = 0, j = 0, k = 0; i < l.size(); i++){
        if(i % 2 == 0){
            result.push_back(even_indices[j]);
            j++;
        } else {
            result.push_back(odd_indices[k]);
            k++;
        }
    }
    
    return result;
}