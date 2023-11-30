vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> indices;
    
    for(int i=0; i<l.size(); i++){
        if(i%3 == 0){
            indices.push_back(i);
        }
    }
    
    vector<int> sorted_values;
    for(int i=0; i<indices.size(); i++){
        sorted_values.push_back(l[indices[i]]);
    }
    
    sort(sorted_values.begin(), sorted_values.end());
    
    for(int i=0; i<indices.size(); i++){
        l_prime[indices[i]] = sorted_values[i];
    }
    
    return l_prime;
}