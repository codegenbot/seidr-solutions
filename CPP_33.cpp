vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> indices;
    
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            indices.push_back(i);
        }
    }
    
    sort(indices.begin(), indices.end());
    
    for(int i=0; i<indices.size(); i++){
        l_prime[indices[i]] = l[indices[i]];
    }
    
    return l_prime;
}