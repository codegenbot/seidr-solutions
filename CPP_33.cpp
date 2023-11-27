vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> divisible_by_three_indices;
    
    for(int i=0; i<l.size(); i++){
        if(i%3 == 0){
            divisible_by_three_indices.push_back(i);
        }
    }
    
    for(int i=0; i<divisible_by_three_indices.size(); i++){
        for(int j=i+1; j<divisible_by_three_indices.size(); j++){
            if(l[divisible_by_three_indices[i]] > l[divisible_by_three_indices[j]]){
                swap(l_prime[divisible_by_three_indices[i]], l_prime[divisible_by_three_indices[j]]);
            }
        }
    }
    
    return l_prime;
}