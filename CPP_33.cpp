vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l.size());
    vector<int> divisible_indices;
    
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            divisible_indices.push_back(i);
        }
    }
    
    sort(divisible_indices.begin(), divisible_indices.end(), [&](int a, int b){
        return l[a] < l[b];
    });
    
    for(int i = 0; i < l.size(); i++){
        if(i % 3 == 0){
            l_prime[i] = l[divisible_indices[i/3]];
        }
        else{
            l_prime[i] = l[i];
        }
    }
    
    return l_prime;
}