vector<float> even_indices;
    vector<float> odd_indices;
    vector<float> sorted_even_indices;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            even_indices.push_back(l[i]);
            sorted_even_indices.push_back(l[i]);
        } else {
            odd_indices.push_back(l[i]);
        }
    }
    
    sort(sorted_even_indices.begin(), sorted_even_indices.end());
    
    vector<float> result;
    int even_counter = 0;
    int odd_counter = 0;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 2 == 0){
            result.push_back(even_indices[even_counter]);
            even_counter++;
        } else {
            result.push_back(odd_indices[odd_counter]);
            odd_counter++;
        }
    }
    
    return result;
}